#include <bits/stdc++.h>

const int MOD = 1e9 + 7;
typedef long long ll;
int main (int argc, char *argv[]) {
    ll n;
    std::cin >> n;

    std::vector<std::vector<char>> grid(n, std::vector<char> (n));
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            std::cin >> grid[i][j];
        }
    }
    
    std::vector<std::vector<int>> dp(n + 1, std::vector<int>(n + 1));

    std::vector<std::pair<int, int>> dirs = {
        {0, 1}, {1, 0},
        {-1, 0}, {0, -1}
    };
    if(grid[0][0] != '*') dp[0][0] = 1;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            for(auto dir : dirs){
                ll dr = i + dir.first;
                ll dc  = j + dir.second;

                if(dr < 0 || dc < 0 || dr >= n || dc >= n || grid[i][j] == '*'|| grid[dr][dc] == '*'){
                    continue;
                }

               dp[i][j] = (dp[i][j] + dp[i + dir.first][j + dir.second]) % MOD;
            }
        }
    }

    std::cout << dp[n - 1][n - 1] << std::endl;
    return 0;
}
