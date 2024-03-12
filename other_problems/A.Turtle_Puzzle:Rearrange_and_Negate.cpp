#include <bits/stdc++.h>

#define ll long long 
int main(int argc, char const *argv[])
{
    int t;
    std::cin >> t;
    // int i = t;
    while (t--)
    {
        int n;
        std::cin >> n; 
        std::vector<int> vec(n);

        for(int i = 0; i < n; i++){
            std::cin >> vec[i];
        }

        int sum = 0;
        for(auto i : vec){
            sum += std::abs(i);
        }

        std::cout << sum << "\n";
    }
    
    return 0;
}
