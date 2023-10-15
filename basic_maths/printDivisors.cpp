#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int n;
    cin >> n;

    for(int i = 1; i < sqrt(n); i++){
        if(n % i == 0){
            cout << i << "\n";
            if(n / i != i){
                cout << (n / i) << "\n";
            }
        }
    }
    return 0;
}