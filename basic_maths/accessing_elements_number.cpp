#include<bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    // accessing numbers 
    int num = 7789;
    while(num > 0){
        int last_digit = num % 10;
        cout << last_digit << "\n";
        num /= 10;
    }
    return 0;
}
