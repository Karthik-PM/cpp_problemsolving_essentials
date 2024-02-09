#include <bits/stdc++.h>

int main(int argc, char const *argv[])
{
    int t; 
    std::cin >> t;

    int cost[t];
    for(int i = 0; i < t; i++) std::cin >> cost[i];

    int cost_min = INT_MAX;
    int loc = 0;
    bool flag = false;
    for(int i = 0; i < t; i++){
        if(cost[i] < cost_min){
            loc = i + 1;
            cost_min = cost[i];
            flag = false;
        } else if(cost[i] == cost_min){
            flag = true;
        }
    } 
    if(flag) std::cout << "Still Rozdil"  << "\n";
    else std::cout << loc << "\n";
    return 0;
}
