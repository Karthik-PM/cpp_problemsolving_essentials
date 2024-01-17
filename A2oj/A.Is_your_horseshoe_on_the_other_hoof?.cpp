#include<bits/stdc++.h>

int main(int argc, char const *argv[])
{
    std::map<int, int> mp;
    int val;
    for(int i = 0; i < 4; i++){
        std::cin >> val;
        mp[val] += 1;
    }
    std::cout << 4 - mp.size() << "\n";
    return 0;
}
