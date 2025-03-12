#include <bits/stdc++.h>
#include <functional>

typedef long long ll;
int main(int argc, const char** argv) {
    int n;

    std::cin >> n;

    std::string ns = std::to_string(n);


    std::function<int (int)> solve = [&] (int n) -> int {
        std::vector<ll> dp(n + 1, INT_MAX);
        dp[0] = 0;
        for(ll i = 1; i <= n; i++){;
            std::string ki = std::to_string(i);
            for(char c : ki){
                ll digit = c - '0';
                if(digit > 0) dp[i] = std::min(dp[i], dp[i - digit] + 1);
            }
        }
        return dp[n];
    };

    std::cout << solve(n) << std::endl;
    return 0;
}
