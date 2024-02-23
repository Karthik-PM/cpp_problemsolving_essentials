#include <bits/stdc++.h>
void print(std::vector<int> vec){
    for(auto i : vec){
        std::cout << i << " ";
    }
    std::cout << "\n";
}
void solve(std::vector<int> vec){
    int start = 0;
    int end = vec.size() - 1;
    int n = vec.size();
    while (start < n)
    {
        if(vec[start] == 1){
            break;
        }
        start ++;
    } 

    while (end >= start)
    {
        if(vec[end] == 1){
            break;
        }
        end --;
    }

    int nearest_zero = end;
    int ans = 0;
    while(nearest_zero > start){
        /* std::cout << end << "\n"; */
        while (end >= start)
        {
            if(vec[end] == 1){
                break;
            }
            end --;
        }

        int nearest_zero = end;
        while(nearest_zero >= start){
            if(vec[nearest_zero] == 0){
                break;
            }
            nearest_zero --;
        }

        if(nearest_zero < start){
            break;
        }
        /* std::cout << nearest_zero << "\n"; */
        std::swap(vec[nearest_zero], vec[end]);
        /* print(vec); */
        /* std::cout << nearest_zero << " " << end << "\n"; */
        ans ++;
    }

    std::cout << ans << "\n";
}
int main(int argc, char const *argv[])
{
    int t;
    std::cin >> t;
    while (t--)
    {
        int n;
        std::cin >> n;
        std::vector<int> vec(n);
        for(int i = 0; i < n; i++){
            std::cin >> vec[i];
            // std::cout << vec[i] << " ";
        }
        solve(vec);
    }
    
    return 0;
}
