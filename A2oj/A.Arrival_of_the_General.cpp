#include<bits/stdc++.h>

int main(int argc, char const *argv[])
{
    int n;
    std::cin >> n;

    int inp;
    std::cin >> inp;
    int min[] = {inp, 0};
    int max[] = {inp, 0};

    for(int i = 1; i < n; i++){
        std::cin >> inp; 
        if(inp > max[0]){
            max[0] = {inp};
            max[1] = {i};
        }
        if(inp <= min[0]){
            min[0] = {inp};
            min[1] = {i};
        }
    }

    if((max[1] - min[1]) > 0){
        std::cout << max[1] + abs(min[1] - (n - 1)) - 1 << "\n";
    }else{
        std::cout << max[1] + abs(min[1] - (n - 1)) << "\n";
    }
    return 0;
}
