#include<bits/stdc++.h>

int main(int argc, char const *argv[])
{
    int t;
    std::cin >> t;
    double fraction = 0;
    double val;
    for(int i = 0; i < t; i++){
        std::cin >> val;
        fraction += val;
    }
    std::cout << std::fixed << std::setprecision(12) <<  fraction / t << "\n";
    return 0;
}
