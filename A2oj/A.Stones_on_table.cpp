#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int n;
    cin >> n;

    string s;
    cin >> s;

    char target = s[0];
    int count = 0;
    for(int i = 1; i < n; i++){
        if(target == s[i]) {
            count ++;
        }
        if(target != s[i]){
            target = s[i];
        }
    }
    std::cout << count << "\n";
    return 0;
}