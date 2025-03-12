#include <bits/stdc++.h>
#include <functional>

typedef long long ll;
int main(int argc, const char** argv) {
    int n;

    std::cin >> n;



    std::function<ll (ll)> solve = [&] (ll n) -> ll {
        std::vector<ll> dp(n + 1, INT_MAX);
        dp[0] = 0;
        for(ll i = 1; i <= n; i++){
            ll val = i;
            while(val){
                dp[i] = std::min(dp[i], dp[i - val % 10] + 1);
                val /= 10;
            }
        }
        return dp[n];
    };

    std::cout << solve(n) << std::endl;
    return 0;
}
