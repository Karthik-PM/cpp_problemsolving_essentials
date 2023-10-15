#include<bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int num;
    cin >> num;

    int reverse_num = 0;
    while (num > 0)
    {
        reverse_num = reverse_num * 10  + (num % 10);
        num /= 10;
    }
    cout << reverse_num << "\n";
    return 0;
}
