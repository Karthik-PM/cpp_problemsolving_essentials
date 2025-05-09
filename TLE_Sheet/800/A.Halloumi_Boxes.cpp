#include <algorithm>
#include <bits/stdc++.h>


int main(int argc, const char** argv) {
    int t;
    std::cin >> t;
    std::vector<int> arr;
    int n, k;
    while(t--){
        std::cin >> n >> k;
        long long prev;
        std::cin >> prev;
        bool flag = true;

        for(int i = 1; i < n; i++){
            long long num;
            std::cin >> num;

            if(prev > num){
                flag = false;
            }
            prev = num;
        }

        if(flag || k >= 2){
            std::cout << "YES\n";
            continue;
        }

        std::cout << "NO\n";
    }
    return 0;
}
