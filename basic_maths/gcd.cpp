#include <bits/stdc++.h>
using namespace std;
int gcd_rec(int num1, int num2){
    if(num2 == 0) return num1;
    return gcd_rec(num2, num1 % num2);
}

int main(int argc, char const *argv[])
{
    int num1;
    int num2;
    cin >> num1 >> num2;
    int gcd;
    for(int i = 1; i <= min(num1, num2); i++){
        if ((num1 % i == 0) && (num2 % i == 0)){
            gcd = i;
        }
    }
    cout << gcd << "\n";  // time complexity O(n)
    cout << gcd_rec(num1, num2) << "\n"; // time complexity O(log(n))
    return 0;
}