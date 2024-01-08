#include <bits/stdc++.h>
using namespace std;

bool isPrime(int n){
    int i = 2;
    int count = 0;
    while(i <= n){
        if(n % i == 0){
            count ++;
        }
        i++;
    }
    return (count > 1) ? false : true;
}

int nextPrime(int n, int m){
    int val = m;
    for(int i = n + 1; i <= m; i++) {
        int count = 0;
        for(int j = 2; j <= i; j++){
            if(i % j == 0) count ++;
        }
        if(count <= 1){
            val = min(val, i);
        }
    }
    return val;
}

int main(int argc, char const *argv[])
{
    int n, m; 
    std::cin >> n >> m;
    if((isPrime(n) && isPrime(m)) && (n < m) && (nextPrime(n, m) == m)){
        std::cout << "YES\n";
    }else{
        std::cout << "NO\n";
    }
    return 0;
}
