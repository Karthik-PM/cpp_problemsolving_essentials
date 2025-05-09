#include <bits/stdc++.h>


int main (int argc, char *argv[]) {
    int t;
    std::cin >> t;

    while(t--){
        int n, x;
        std::cin >> n >> x;
 
        int max_cost = 0;
        int curr_cost;
        int prev_cost = 0;
        for(int i = 0; i < n; i++){
            std::cin >> curr_cost;
            max_cost = std::max(max_cost, curr_cost - prev_cost);
            prev_cost = curr_cost;
        }
        max_cost = std::max(max_cost, 2 * (x - curr_cost));
        std::cout << max_cost << std::endl;
    }
    return 0;
}
