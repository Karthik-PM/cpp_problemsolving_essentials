#include <bits/stdc++.h>
int main(int argc, char const *argv[])
{
    int k;
    std::cin >> k;
    std::vector<int> ai;
    std::copy_n(std::istream_iterator<int>(std::cin), 12, std::back_inserter(ai));
    std::sort(ai.begin(), ai.end(), std::greater<int>());

    int sum = 0;
    int flag = false;
    int months;
    for(months = 0; months < 12 && (k > 0); months++){
        sum += ai[months];
        if(sum >= k){
            flag = true;
            break;
        }
    }
    if(flag){
        std::cout << months + 1 << "\n";
    }else if (k == 0){
        std::cout << 0 << "\n";
    } else {
        std::cout << -1 << "\n";
    }
    return 0;
}
