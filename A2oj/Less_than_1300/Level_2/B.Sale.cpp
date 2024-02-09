#include <bits/stdc++.h>

int main(int argc, char const *argv[])
{
    int n, m;

    std::cin >> n >> m;

    std::vector<int> vec;
    std::copy_n(std::istream_iterator<int>(std::cin), n, std::back_inserter(vec));
    
    int cost = 0;
    for(int i = 0; i < m; i++){
        int min = 0;
        int loc = -1;
        for(int i = 0; i < vec.size(); i++){
            if( (vec[i] < 0 ) && (vec[i] < min)){
                min = vec[i];
                loc = i;
            }
        }
        cost += min;
        vec.erase(vec.begin() + loc);
    }
    std::cout << std::abs(cost) << "\n";
    return 0;
}
