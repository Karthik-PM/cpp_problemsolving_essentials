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
        if(((total_fingers + i) % (n + 1)) != 1){ // this is like a cirular arragement where the last position is 0 ( since n % n = 0)
            number_of_ways ++; // therefore if the result comes back to first position then no need to select that number
        } 
    }
    std::cout << number_of_ways << "\n";
    return 0;
}
