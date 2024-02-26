#include <bits/stdc++.h>

int main(int argc, char const *argv[])
{
    int t;
    std::cin >> t;

    while (t--)
    {
        int n, k; 
        std::cin >> n >> k;

        std::vector<int> a(n);
        std::vector<int> x(n);

        for(int i = 0; i < n; i++) {
            std::cin >> a[i];
        }

        // std::cout << a[1];
        for(int i = 0; i < n; i++) {
            std::cin >> x[i];
        }

        std::vector<long long> abs_pos(n + 1); // store all the absolute positions
        for(int i = 0; i < n; ++i){ 
            abs_pos[std::abs(x[i])] += a[i];
        }

        long long int lft = 0;
        bool flag = true;
        for(int i = 1; i <= n ; ++i){
            lft += (k - abs_pos[i]); // remaining to attack
            if(lft < 0){
                flag = false;
                break;
            }
        }
        if(flag) {
            std::cout << "YES\n";
        }else{
            std::cout << "NO\n";
        }
    }
    
    return 0;
}
