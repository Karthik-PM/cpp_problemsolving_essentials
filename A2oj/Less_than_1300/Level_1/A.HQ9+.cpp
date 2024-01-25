#include<bits/stdc++.h>

int main(int argc, char const *argv[])
{
    std::string inp;
    std::cin >> inp;
    std::vector<char> hqt = {'H', 'Q', '9'};
    std::vector<char> :: iterator it;
    bool flag = false;
    for(char c : inp){
        it = std::find(hqt.begin(), hqt.end(), c);
        if(it != hqt.end()){
            flag = true;
        }
    }
    if(flag){
        std::cout << "YES\n";
    }else{
        std::cout << "NO\n";
    }
    return 0;
}