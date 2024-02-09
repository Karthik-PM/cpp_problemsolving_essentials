#include <bits/stdc++.h>

int main(int argc, char const *argv[])
{
    std::string s1;
    std::string s2;
    std::cin >> s1 >> s2;
    bool flag = true;
    for(int i = 0; i < s1.length(); i++){
        if(s1[i] != s2[s2.length() - 1 - i]){
            flag = false;            
            break;
        }
    }
    if(flag) std::cout << "YES\n";
    else std::cout << "NO\n";
    return 0;
}
