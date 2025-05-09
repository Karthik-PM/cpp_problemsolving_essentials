#include <bits/stdc++.h>
#include <unordered_set>
#include <variant>

void solve(){
    int t;
    std::cin >> t;

    int n, p;

    std::vector<int> ai;
    std::vector<int> bi;
    std::unordered_set<int>visited;
    int res = 0;
    while(t--){
        std::cin >> n >> p;
        int num;
        
        for(int i = 0; i < n; i++){
            std::cin >> num;
            ai.push_back(num);
        }

        for(int i = 0; i < n; i++){
            std::cin >> num;

            bi.push_back(num);

            if(!bi.empty() && bi.back() > num){
                std::swap(bi[i - 1], bi[i]);
                std::swap(ai[i - 1], ai[i]);
            }
        }

        int i = 0;
        int j = n - 1;
        int curr_cost = 0;
        int res = 0;
        while(i <= j){
            if(curr_cost == 0){
                res += p;
                curr_cost += p;
            }

            while(curr_cost--){
                curr_cost += bi[i];
                j--;
            }
            i++;
        }
    }
}

int main (int argc, char *argv[]) {
    solve();    
    return 0;
}
