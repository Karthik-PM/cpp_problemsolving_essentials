#include <bits/stdc++.h>
#include <functional>
#include <unordered_map>

const int mod = 1e9 + 7;
int main (int argc, char *argv[]) {
    std::function<long long(long long)> solve  = [&] (long long n) -> long long {
        std::vector<int> dp(n + 1);
        dp[0] = 1;
        for(int i = 1; i <= n; i++){
            for(int j = 1; j <= 6; j++){
                if(j <= i) dp[i] = (dp[i] + dp[i - j]) % mod;
            }
        }
        return dp[n];
    };
    
    int n;
    std::cin >> n;
    std::cout << solve(n) << std::endl;
    return 0;
}
