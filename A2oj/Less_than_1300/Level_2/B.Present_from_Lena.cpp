#include <bits/stdc++.h>

int main(int argc, char const *argv[])
{
    int n;
    std::cin >> n;
    for(int i = 0; i <= n; i++){
        for(int j = (n - i); j >= 1; j--){ 
            // std::cout << " ";
            std::cout << "  ";
        }
        for(int j = 0; j <= i - 1; j++){
            std::cout << j << " ";
        }
        // std::cout << i - 1;
        for(int j = i; j > 0; j--){
            std::cout << j << " ";
        } 
        std::cout << "0\n";
    }

    for(int i = n - 1; i >= 0; i--){
        for(int j = 0; j < (n - i); j++){
            std::cout << "  ";
        }
        for(int j = 0; j < i; j++){
            std::cout << j << " ";
        }
        for(int j = i; j > 0; j--){
            std::cout << j << " ";
        } 
        std::cout << "0\n";
    }

    return 0;
}
