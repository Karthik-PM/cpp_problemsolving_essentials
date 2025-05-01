#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool dfs(std::vector<std::vector<int>>& prerequisites, std::unordered_map<int, std::vector<int>>& adjlist, std::unordered_set<int>& cycle, std::unordered_set<int>& visited, std::vector<int>& subjects, int course ){
        
        if(cycle.count(course)  ){
            return false;
        }
        if(visited.count(course)){
            return true;
        }
        cycle.insert(course); 

        for(auto preq : adjlist[course]){
            if(!dfs(prerequisites, adjlist, cycle, visited, subjects, preq)){
                return false;
            }
        }

        cycle.erase(course);
        visited.insert(course);
        subjects.push_back(course);
        return true;

    }

    //topological sort  
    vector<int> findOrder(int numCourses, vector<vector<int>>& prerequisites) {
        std::unordered_map<int , std::vector<int>> adjList;

        for(auto preq : prerequisites){
            adjList[preq[0]].push_back(preq[1]);
        }

        std::vector<int> subjects;
        std::unordered_set<int> visited;
        std::unordered_set<int> cycle;
        for(int course = 0; course < numCourses; course++){
            if(!dfs(prerequisites, adjList, cycle, visited, subjects, course)){
                return {};
            }
        }
        return subjects;
    }
};

int main(){
    Solution sol;
    vector<vector<int>> prerequisites = {{1,0},{2,0},{3,1},{3,2}};
    vector<int> result = sol.findOrder(4, prerequisites);
    for(auto course : result){
        cout << course << " ";
    }
    return 0;
}
