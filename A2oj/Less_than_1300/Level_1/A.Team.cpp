#include<bits/stdc++.h>
int main(int argc, char const *argv[])
{
    int n; 
    std::cin >> n;
    int p, v, t;
    int count = 0;
    while(n--){
        std::cin >> p >> v >> t;
        if((p + v + t) > 1){
            count ++;
        }
    }
    std::cout << count << "\n";
    return 0;
}
