#include<bits/stdc++.h>

int main(int argc, char const *argv[])
{
    int t;
    std::cin >> t;
    int val = 0;
    while(t--){
        std::string str1; 
        std::cin >> str1;
        std::string op = "";
        for(char c : str1){
            if(c == '+'){
                op += c;
            }
            if(c == '-'){
                op += c;
            }
        }
        if(op == "++") val ++;
        else if (op == "--") val --;
    }
    std::cout << val << "\n";
    return 0;
}
