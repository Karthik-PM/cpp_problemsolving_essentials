#include <bits/stdc++.h>

int main(int argc, char const *argv[])
{
    int n;
    std::cin >> n;
    std::vector <int> ai;
    std::copy_n(std::istream_iterator<int> (std::cin), n, std::back_inserter(ai));

    int m; 
    std::cin >> m;
    std::vector <int> bj;
    std::copy_n(std::istream_iterator<int> (std::cin), m, std::back_inserter(bj));

    int max = INT_MIN;
    for(auto i1 : ai){
        for(auto i2 : bj){
            if(( i2 % i1 == 0 ) && ((i2 / i1) > max)) {
                max = i2 / i1;
            }
        }
    }

    int count = 0;    
    for(auto i1 : ai){
        for(auto i2 : bj){ 
            if(( i2 % i1 == 0 ) && ((i2 / i1) == max)) {
                count ++;
            }
        }
    }

    std::cout << count << "\n";
    return 0;
}