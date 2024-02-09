#include<bits/stdc++.h>
#define ll  long long
int main(int argc, char const *argv[])
{
    ll n, k; 
    std::cin >> n >> k;
    if( k <= (n + 1) / 2 ){ // odd numbers are located behind the mid
        std::cout << k * 2 - 1 << "\n";
    } else {
        std::cout << (k - (n + 1)/2) * 2 << "\n";
    }
    return 0;
}