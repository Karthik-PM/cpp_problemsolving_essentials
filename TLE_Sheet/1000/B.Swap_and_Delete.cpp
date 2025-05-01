#include <bits/stdc++.h>

void solve(){
    int t;
    std::string s;
    std::cin >> t;
    while(t--){
        std::cin >> s;
        std::vector<int> count(2, 0);
        for(auto i : s){
            count[i - '0'] ++;
        }
        
        int t_count = 0; 
        for(auto i : s){
            if(count[1 - (i - '0')] > 0){
                count[1 - (i - '0')] --;
                t_count ++;
                continue;
            }
            break;
        }

        std::cout << s.size() - t_count<< std::endl;
    }
}
int main(int argc, const char** argv) {
    solve();
    return 0;
}
