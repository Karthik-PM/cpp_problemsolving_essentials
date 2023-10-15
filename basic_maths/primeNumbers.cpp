#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int n;
    cin >> n;

    bool flag = true;
    for(int i = 2; i < sqrt(n); i++){
        if( n % i == 0) {
            flag = false;
            break;
        }
    }
    cout << flag << "\n";
    return 0;
}