#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int n;
    int temp;
    cin >> n;
    temp = n;

    int org = n;
    int i = 0;

    while(temp > 0){
        i++;
        temp /= 10;
    }

    int sum = 0;
    while(n > 0){
        sum += pow(n % 10, i);
        n /= 10;
    }

    bool res =  (sum == org) ? true : false;
    cout << res << "\n";

    return 0;
}
