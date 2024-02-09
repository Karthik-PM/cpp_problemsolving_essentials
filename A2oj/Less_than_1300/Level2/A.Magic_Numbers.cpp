#include <bits/stdc++.h>

int main(int argc, char const *argv[])
{
    std::string str; 
    std::cin >> str;

    bool flag = true;
    for(auto c : str){
        if(c != '1' && c != '4'){
            flag = false;
        }
    }
    if(str[0] != '1') flag = false;
    else if(str.find("1444") != str.npos) flag = false;

    if(flag) std::cout << "YES\n";
    else std::cout << "NO\n";
    return 0;
}