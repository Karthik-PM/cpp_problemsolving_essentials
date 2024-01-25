#include <bits/stdc++.h>

int main(int argc, char const *argv[])
{
    int t;
    std::cin >> t;
    if(t % 2 != 0) std::cout << -1 << "\n";
    else{
        int i = 2;
        while(i <= t){
            std::cout << i << " " << i - 1 << " ";
            i += 2;
        }
    }
    return 0;
}
