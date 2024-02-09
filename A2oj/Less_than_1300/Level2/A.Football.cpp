#include <bits/stdc++.h>

int main(int argc, char const *argv[])
{
    int t;
    std::cin >> t;
    std::map<std::string, int> mp;
    int max = 0;
    while (t--)
    {
        std::string teams;
        std::cin >> teams;
        mp[teams]++;
        max = std::max(mp[teams], max);
    }

    for(auto i : mp){
        if(i.second == max) std::cout << i.first;
    }
    std::cout << "\n";
    return 0;
}