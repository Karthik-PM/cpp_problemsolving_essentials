#include <bits/stdc++.h>
#define ll long long 
int main(int argc, char const *argv[])
{
    ll n, m;
    std::cin >> n >> m;
    ll cost = 0;
    ll l = 1;
    ll r;
    for(int i = 0; i < m; i++){
        std::cin >> r;
        if(l <= r){
            cost += (r - l); 
            std::cout << l << " " << r  << " " << r - l << "\n";
        } else if(l > r) {
            cost += (n - l) + r;
            std::cout << l << " " << r << " " << (n - l) + r << "\n";
        }
        l = r;
    }
    std::cout << cost << "\n";
    return 0;
}