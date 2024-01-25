#include<bits/stdc++.h>

int main(int argc, char const *argv[])
{
    int t;
    std::cin >> t;
    int l1, l2;
    int i = 0;
    int l1_count[] = {0, 0};
    int l2_count[] = {0, 0};
    while(i < t){
        std::cin >> l1 >> l2;
        if(l1 == 0) {
            l1_count[0]++;
        }
        if(l2 == 0) {
            l2_count[0]++;
        }
        if(l1 == 1) {
            l1_count[1]++;
        }
        if(l2 == 1) {
            l2_count[1]++;
        }
        i++;
    }

    int val_rem_l1 = std::min(l1_count[0], l1_count[1]);
    int val_rem_l2 = std::min(l2_count[0], l2_count[1]);
    
    std::cout << val_rem_l1 + val_rem_l2 << "\n";
    return 0;
}