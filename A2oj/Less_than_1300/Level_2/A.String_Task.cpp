#include <bits/stdc++.h>

int main(int argc, char const *argv[])
{
    std::string s1;
    std::cin >> s1;

    int n = s1.length();
    std::vector<char> vow = {'a', 'e', 'i', 'o', 'u', 'y'};
    std::string s2 = "";
    for(int i = 0; i < n; i++){
        if('A' <= s1[i]  && s1[i]<= 'Z') {
            s1[i] = (char) (97 + (int) (s1[i] - 'A'));
        }
        auto itr = std::find(vow.begin(), vow.end(), s1[i]);
        if(itr == vow.end()){
            s2 += "." + std::string(1, s1[i]);
        }
    }
    std::cout << s2 << "\n";
    return 0;
}
