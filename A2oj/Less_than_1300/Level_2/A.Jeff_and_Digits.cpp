#include <bits/stdc++.h>

int main(int argc, char const *argv[])
{
    int n;
    std::cin >> n;
    int t = n;
    int num;
    std::string zeros = "";
    std::string fives = "";
    int val = 0;
    int max = 0;
    while (t--)
    {
       std::cin >> num; 
       if(num == 0) zeros += "0";
       else{
            val += num;
            if(val % 9 == 0){
                max = std::max(max, val);
            }
       }
    }
    for(int i = 0; i < (max / 5); i++) {
        fives += "5";
    }
    if(zeros.size() < 1) std::cout << -1 << "\n";
    else if(fives.size() < 9) std::cout << 0 << "\n";
    else std::cout << fives + zeros << "\n";
    return 0;
}
