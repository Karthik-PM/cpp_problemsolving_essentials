#include <bits/stdc++.h>
int main(int argc, char const *argv[])
{
    std::string s1;
    std::string s2;

    std::cin >> s1 >> s2;
    for(int i = 0; i < s1.size(); i++){
        // std::cout << s1[i] << " " << s2[i] << "\n";
        int c1 = s1[i] - '0';
        int c2 = s2[i] - '0';
        std::cout << (c1 + c2) % 2;
        // std::cout << "\n";
    }
    return 0;
}
