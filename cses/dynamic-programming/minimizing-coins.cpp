#include <bits/stdc++.h>
#include <functional>
#include <vector>


int main (int argc, char *argv[]) {
    int n, x;
    std::cin >> n >> x;

    std::function<int (int, int)> solve = [&] (int n, int x) -> int {
        std::vector<int> coins(n);
        for(int i = 0; i < n; i++){
            std::cin >> coins[i];
        }

        std::vector<int> dp(x + 1, 1e9);
        dp[0] = 0;

        for(int i = 1; i <= x; i++){
            for(int j = 0; j < n; j++){
                if(coins[j] <= i) dp[i] = std::min(dp[i], dp[i - coins[j]] + 1);
            }
        }

        if(dp[x] == 1e9){
            return -1;
        }

        return dp[x];
    };
    
    std::cout << solve(n, x) << std::endl;
    return 0;
}
