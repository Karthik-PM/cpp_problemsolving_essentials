#include <bits/stdc++.h>

int main(int argc, char const *argv[])
{
    int t;    
    std::cin >> t;
    int ai, bi;
    int passengers_present = 0;
    int capacity = INT_MIN;
    while(t--){
        std::cin >> ai >> bi;
        passengers_present += (bi - ai);
        capacity = std::max(capacity, passengers_present);
    }
    std::cout << capacity << "\n";
    return 0;
}