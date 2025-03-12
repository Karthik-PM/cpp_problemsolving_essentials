#include <bits/stdc++.h>
#include <functional>

const int MOD = 1e9 + 7;
int main (int argc, char *argv[]) { 
    int x, n;
    std::cin >> n >> x;

    std::vector<int> coins(n);
    for(int i = 0; i < n; i++){
        std::cin >> coins[i];
    }
    
    std::function<int (int, int)> solve = [&] (int n, int x) -> int{
        std::vector<int> dp(x + 1, 0);
        dp[0] = 1;
        for(int i = 1; i <= x; i++){
            for(auto ci : coins){
                if(ci <= i){
                    dp[i] = (dp[i] + dp[i - ci]) % ( MOD );
                }
            }
        }
        return dp[x];
    };
    
    std::cout << solve(n, x) << std::endl;
    return 0;
}
