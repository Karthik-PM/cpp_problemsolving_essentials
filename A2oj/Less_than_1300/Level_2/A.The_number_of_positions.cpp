#include <bits/stdc++.h>

int main(int argc, char const *argv[])
{
    std::string s1;
    std::cin >> s1;
    // std::cout << s1 << "\n";
    int n = s1.length();
    // std::cout << n << "\n";
    int zeros = 0;
    int zeros_max = 0;
    int ones = 0;
    int ones_max = 0;
    for(int i = 0; i < n; i++){
        if((s1[i] == '0') && (s1[i] == s1[i + 1])){
            zeros ++;
        }else if(s1[i] == '0' && (s1[i] != s1[i + 1])){
            zeros_max = std::max(zeros + 1, zeros_max);
            zeros = 0;
        }else if(s1[i] == '1' && (s1[i] == s1[i + 1])){
            ones ++;
        }else{
            ones_max = std::max(ones + 1, ones_max);
            ones = 0;
        }
    }
    if((ones_max >= 7) || (zeros_max >= 7)){
        std::cout << "YES\n";
    }else{
        std::cout << "NO\n";
    }
    return 0;
}
