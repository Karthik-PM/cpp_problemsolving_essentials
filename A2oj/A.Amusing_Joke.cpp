#include<bits/stdc++.h>
void print(std::map<char, int> mp){
    for(auto i : mp){
        std::cout << i.first << " : " << i.second << "\n";
    }
}
int main(int argc, char const *argv[])
{
    int t = 3;
    std::string str1, str2, str3;
    while(t--) {
        std::cin >> str1 >> str2 >> str3;
    }
    std::map<char, int> mp1; // occurences of name and addresses
    std::map<char, int> mp2; // occurences of shuffled characters

    for(char c : str1){
        mp1[c]++;
    }

    for(char c : str2){
        mp1[c]++;
    }

    for(char c : str3){
        mp2[c]++;
    }

    if(mp1 == mp2){
        std::cout << "YES\n";
    }else{
        std::cout << "NO\n";
    }

    return 0;
}
