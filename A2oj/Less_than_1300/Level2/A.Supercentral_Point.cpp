#include <bits/stdc++.h>

int main(int argc, char const *argv[])
{
    int n;  
    std::cin >> n;
    int t = n;
    int x, y;
    std::vector<std::vector<int>> vec;
    while(t--){
        std::cin >> x >> y;
        vec.push_back({x, y});
    }

    int supercentral_count = 0;
    for(int i = 0; i < vec.size(); i++){
        std::vector<int> target = {vec[i][0], vec[i][1]};
        int criteria_check_1 = 0; 
        int criteria_check_2 = 0;
        int criteria_check_3 = 0;
        int criteria_check_4 = 0;
        for(int j = 0; j < vec.size(); j++){
            if( i != j){
                if((i != j) && (target[1] - vec[j][1]) == 0){ // when y' = y 
                    if(target[0] > vec[j][0]) criteria_check_1 ++;
                    if(target[0] < vec[j][0]) criteria_check_2 ++;
                }

                if(((i != j) && target[0] - vec[j][0]) == 0){ // when x' = x
                    if(target[1] > vec[j][1]) criteria_check_3 ++;
                    if(target[1] < vec[j][1]) criteria_check_4 ++;
                }
            }
        }
        // criteria_check --;
        if(criteria_check_1  >= 1 && criteria_check_2 >= 1 && criteria_check_3 >= 1 && criteria_check_4 >= 1) {
            supercentral_count ++;
        }
    }
    std::cout << supercentral_count << "\n";
    return 0;
}
