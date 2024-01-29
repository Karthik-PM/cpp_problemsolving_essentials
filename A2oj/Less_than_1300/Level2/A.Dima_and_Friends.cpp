#include <bits/stdc++.h>

int main(int argc, char const *argv[])
{
    int n;
    std::cin >> n;
    int t = n;
    int total_fingers = 0;
    while (t--)
    {
       int finger; 
       std::cin >> finger;
       total_fingers += finger;
    }

    int number_of_ways = 0;
    for(int i = 1; i <= 5; i++) {
        if(((total_fingers + i) % (n + 1)) != 1){
            number_of_ways ++;
        } 
    }
    std::cout << number_of_ways << "\n";
    return 0;
}
