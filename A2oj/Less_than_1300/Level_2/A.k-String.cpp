#include <bits/stdc++.h>

int main(int argc, char const *argv[])
{
    int k;
    std::string inp;
    std::cin >> k >> inp;
    std::string dis = "";
    std::map<char, int> mp;
    int val = 0;
    for(char c : inp){
        if(dis.find(c) == std::string::npos){ // if it dosent contain the character
            dis += c;
        }
        mp[c] ++;
        val = mp[c];
    }

    bool flag = false;
    for(auto m : mp){
        if(m.second != val){
            flag = true;
            break;
        }
    }

    int t = k;
    std::string res = "";
    while (t--)
    {
        res += dis;
    }
    
    if(flag){
        std::cout << -1 << "\n";
    }else{
        std::cout << res << "\n";
    }
    return 0;
}
