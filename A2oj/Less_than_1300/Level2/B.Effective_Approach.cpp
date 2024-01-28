#include<bits/stdc++.h>
#define ll long long 
int main(int argc, char const *argv[])
{
    ll n, m;
    std::cin >> n;
    ll t = n;
    std::map<int, int> mp;
    ll res;
    ll pos = 1;
    while(t--){
        std::cin >> res;
        mp[res] = pos++;
    }
    std::cin >> m;
    ll petaya = 0;
    ll vasya = 0;
    t = m;
    while(t--){
        std::cin >> res;
        petaya += n - (mp[res]) + 1;
        vasya += mp[res];
    }
    std::cout << vasya << " " << petaya << std::endl;
    return 0;
}
