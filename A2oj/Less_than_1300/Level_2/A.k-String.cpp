#include <bits/stdc++.h>

int main(int argc, char const *argv[])
{
    int k;
    std::cin >> k;
    std::string str;
    std::cin >> str;

    std::map<char, int> mp;
    for(char c : str){
        mp[c]++;
    }

    bool flag = true;
    for(auto m : mp){
        if(m.second % k != 0){
            flag = false;
            break;
        }
    }

    std::string res = "";

    for(auto m : mp){
        for(int i = 0; i < (m.second / k); i++){
            res += std::string(1, m.first);
        }
    }
    if(!flag) std::cout << -1 << "\n";
    else {
        int t = k;
        std::string res1 = "";
        while (t--)
        {
            res1 += res;
        }
        std::cout << res1 << "\n";
    }
    return 0;
}
