#include <bits/stdc++.h>
#define ll long long
void printvec(std::vector<ll> v){
    for(auto i : v){
        std::cout << i << " ";
    }
    std::cout << "\n";
}
int main(int argc, char const *argv[])
{
    ll t;
    std::cin >> t;
    while (t--)
    {
        ll n;
        std::cin >> n;

        std::vector<ll> vec(n);
        for(int i = 0; i < n; i++) std::cin >> vec[i];

        // printvec(vec);
        int sum = std::accumulate(vec.begin(), vec.end(), 0);
        std::sort(vec.begin(), vec.end(), std::greater<ll>());
        auto itr = std::find(vec.begin(), vec.end(), sum % 3);
        if(((sum + 1) % 3) == 0) {
            std::cout << 1 << "\n";
            // std::cout << sum << "\n";
        }
        else if((itr != vec.end())) {
            std::cout << 1 << "\n";
        } 
        else if(n == 1){
            std::cout << 1 << "\n";
        }
        else{
            int i = 0;
            ll lft = sum % 3;
            int moves = 0;
            printvec(vec);
            while (vec[i] < lft)
            {
                ll diff = (lft - vec[i]);
                std::cout << diff << "\n";
                auto fnd = std::find(vec.begin(), vec.end(), diff);
                if(fnd != vec.end()){
                    moves += 2;
                }
                i++;
            }
            std::cout << moves << "\n";
        }

    }
    
    return 0;
}
