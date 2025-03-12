#include <bits/stdc++.h>
#include <functional>
#include <vector>

const int MOD = 1e9 + 7;
typedef long long ll;
int main (int argc, char *argv[]) {
    ll x, n;

    std::cin >> n >> x;
    std::vector<ll> coins(n);
    for(ll i = 0; i < n; i++){
        std::cin >> coins[i];
    }
    
    std::function<ll (ll, ll)> solve = [&] (ll n, ll x) -> ll {

        std::vector<ll> dp(x + 1, 0);
        dp[0] = 1;
        for(auto c : coins){
            for(ll i = 1; i <= x; i++){
                if(i >= c) dp[i] = (dp[i] + dp[i - c]) % MOD;
            }
        }

        return dp[x];
    };

    std::cout << solve(n, x) << std::endl;
    return 0;
}
