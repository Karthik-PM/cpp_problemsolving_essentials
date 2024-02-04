#include <bits/stdc++.h>

int main(int argc, char const *argv[])
{
    int n; 
    std::cin >> n;
    int solders[n];
    for(int i = 0; i < n; i++){
        std::cin >> solders[i];
    }

    int l = 0; 
    int r = 1;

    int l_min = l;
    int r_min = r;
    int min_val = abs(solders[0] - solders[1]);
    for(int i = 0; i <= n ; i++){
        if(abs(solders[l] - solders[r]) < min_val){
            l_min = l;
            r_min = r;
            min_val = std::min(min_val, abs(solders[l] - solders[r]));
        }
        l = (l + 1) % n;
        r = (r + 1) % n;
    }
    std::cout << l_min + 1 << " " << r_min + 1 << "\n";
    return 0;
}
