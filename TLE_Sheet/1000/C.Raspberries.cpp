#include <bits/stdc++.h>

int main (int argc, char *argv[]) {
    int t;
    std::cin >> t;
    int n, k;

    while(t--){

        std::cin >> n >> k;

        int even_count = 0;
        int result = INT_MAX;
        for(int i = 0; i < n; i++){
            int number;
            std::cin >> number;

            if(number % 2 == 0){
                even_count++;
            }

            if(number % k == 0){
                result = 0;
            }

            result = std::min(result, k - (number % k)); 
        }

        if(k == 4){
            if(even_count >= 2){
                result = std::min(result, 0);
            }

            if(even_count == 1){
                result = std::min(result, 1);
            }

            if(even_count == 0){
                result = std::min(result, 2);
            }
        }

        std::cout << result << std::endl;
    }

    return 0;
}
