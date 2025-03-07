#include <bits/stdc++.h>
#include <set>
class GraphNode{
private:
    std::string val;
    std::vector<std::string> neighbours;

    GraphNode(std::string& val) : val(val){

    }
};

std::unordered_map<std::string, std::vector<std::string>> buildAdjList(std::vector<std::vector<std::string>> edges){
    std::unordered_map<std::string,std::vector<std::string>> Adjlist;
    for(auto edge : edges){
        std::string src = edge[0], des = edge[1];

        Adjlist[src].push_back(des);
    }

    return Adjlist;
}

int dfs(std::string node, std::string target, std::unordered_map<std::string, std::vector<std::string>>& adjList, std::set<std::string>& visit){
    if(visit.count(node)){
        return 0;
    }
    
    if(node == target){
        return 1; 
    }

    int count = 0;
    visit.insert(node);
    for(auto neighbour : adjList[node]){
        count += dfs(neighbour, target, adjList, visit);
    }

    visit.erase(node);
    return count;
}

int main(int argc, const char** argv) {
    std::vector<std::vector<std::string>> edges = 
            {{"A", "B"}, {"B", "C"}, {"B", "E"}, {"C", "E"}, {"E", "D"}};

    std::unordered_map<std::string, std::vector<std::string>> adjList = buildAdjList(edges);


    std::set<std::string> visit;
    std::cout << dfs("A", "D", adjList, visit) << std::endl;
    return 0;
}
