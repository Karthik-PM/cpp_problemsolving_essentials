#include<bits/stdc++.h>

int main(int argc, char const *argv[])
{
    int k,l,m,n,d;
    std::cin >> k >> l >> m >> n >> d;
    int count = 0;
    for(int i = 1; i <= d; i++){
        if((i % k == 0) || (i % l == 0) || (i % m == 0) || (i % n == 0)){
            count++;
        }
    }
    std::cout << count << "\n";
    return 0;
}
