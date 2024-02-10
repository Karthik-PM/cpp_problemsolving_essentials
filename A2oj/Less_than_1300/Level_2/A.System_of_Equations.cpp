#include <bits/stdc++.h>

int main(int argc, char const *argv[])
{
    /* if we analyse the domain then sqroot(n - a) , sqroot(n - b) means (n - a) >= 0 (n - b) >= 0
        which means a <= n and b <=n, there fore the domain should be (a, b) such that 0 <= a <= n, 0 <= b <= m; 
    */
    int n, m;
    std::cin >> n >> m;
    int count = 0;
    for(int a = 0; a <= n; a++){ 
        for(int b = 0; b <= m; b++){
            if(((std::pow(a, 2) + b) == n) && (a + std::pow(b, 2) == m)){
                count ++;
            }
        }
    }
    std::cout << count << "\n";
    return 0;

}
