#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(int argc, char const *argv[])
{
    ll n;
    cin >> n;
    int count = 0;
    while(n != 0){
        if((n % 10 == 4) || (n % 10 == 7)){
            count ++;
        }
        n /= 10;
    } 
    if(count == 4 || count == 7) std::cout << "YES\n";
    else std::cout << "NO\n";
    return 0;
}