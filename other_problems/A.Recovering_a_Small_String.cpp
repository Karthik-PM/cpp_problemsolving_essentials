#include<bits/stdc++.h>

int main(int argc, char const *argv[])
{
    int n;
    std::cin >> n;
    int t = n;
    while (t--)
    {
        int num;
        std::cin >> num;
        std::string res = "";
        if(num <= 26){
            int val = (num - ((int)('a') - 96) * 2);
            char c = 96 + val; 
            res = "aa" + std::string(1, c);
            std::cout << res << "\n";
        }else{
            int t1 = num;
            int count = 0;        
            while(t1 > 26){
                res += std::string(1,'z');
                count ++;
                t1 = t1 - 26;
            }
            if(count > 1){
                char c = 96 + (t1);
                std::cout << std::string(1, c) + res << "\n";
            }else{
                if(t1 < 2){
                    std::cout << "aay\n";
                }else{
                    char c = 96 + (t1 - 1);
                    std::cout << "a" + std::string(1, c) + res << "\n";
                }
            }
        }
    }
    
    return 0;
}
