#include<bits/stdc++.h>

std::string lower(std::string s){
    char lower;
    std::string s1 = "";
    for(auto c : s){
        if(c < 'a'){
            lower = c + abs('A' - 'a');
        }else{
            lower = c;
        }
        s1 += lower;
    }
    return s1;
}

int main(int argc, char const *argv[])
{
    std::string s1;
    std::string s2; 
    std::cin >> s1 >> s2;
    s1 = lower(s1);
    s2 = lower(s2);
    int res = 0;
    int n = s1.size();

    for(int i = 0; i < n; i ++){
        if(s1[i] > s2[i]){
            res = 1;
            break;
        }
        if(s1[i] < s2[i]){
            res = -1;
            break;
        }
    }
    std::cout << res << "\n";
    return 0;
}
