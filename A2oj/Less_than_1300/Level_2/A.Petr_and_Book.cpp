#include <bits/stdc++.h>

int main(int argc, char const *argv[])
{
    int n;
    std::cin >> n;
    std::vector<int> nums = {0, 0, 0, 0, 0, 0, 0}; // allocate 7 spaces in a vector
    for(int i = 0; i < 7 ; i++){
        std::cin >> nums[i];
    }

    int i = 0;
    while(n > 0){
        n = n - nums[i % 7]; // loop util we get n = 0
        if(n <= 0) break; // dont want to increment when it stops at final value
        i++;
    }
    std::cout << (i % 7) + 1 << "\n"; // output which day of the week it is
    return 0;
}
