#include<bits/stdc++.h>
int main(int argc, char const *argv[])
{
    int n;
    std::cin >> n; 
    int val;
    std::cin >> val;
    int prev_max = val;
    int prev_min = val;
    int count = 0;
    for(int i = 1; i < n; i++){
        std::cin >> val;
        if(prev_min > val){
            prev_min = std::min(prev_min, val);
            count ++;
        }
        if(prev_max < val){
            prev_max = std::max(prev_max, val);
            count++;
        }

    }
    std::cout << count << "\n";
    return 0;
}
