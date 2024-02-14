#include<bits/stdc++.h>
 
int main(int argc, char const *argv[])
{
    int n;
    std::cin >> n; 
 
    int t = n;
    
    int l, b;
    while (t--)
    {
        std::cin >> l >> b; 
        if((l % 2 == 1) && (b % 2 == 1)){
            std::cout << "NO\n";
        }else if((l % 2 == 0) && ((l / 2) != b)){
            std::cout << "YES\n";
        }else if((b % 2 == 0) && ((b / 2) != l)){
            std::cout << "YES\n";
        }else{
            std::cout << "NO\n";
        }
    }
    
    return 0;
}