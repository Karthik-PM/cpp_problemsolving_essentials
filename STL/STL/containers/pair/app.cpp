#include <bits/stdc++.h>
int main(int argc, char const *argv[])
{
    std::pair<int, int> p = {1, 3};
    std::cout << p.first << " " << p.second << "\n";
    std::pair<int, int> arr[] = { {1, 2}, {2, 5}, {5, 1}};
    for(auto p : arr){
        std::cout << p.first << " " << p.second << "\n";
    }
}
