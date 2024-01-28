#include<bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    std::vector<vector<int>> toggle;
    std::vector<vector<int>> location;

    int x, y, z;
    for(int i = 0; i < 3; i++){
        cin >> x >> y >> z;
        toggle.push_back({x, y, z});
        location.push_back({1, 1, 1});
    }

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            if(toggle[i][j] % 2 != 0){
                location[i][j] += toggle[i][j];
                if(i != 2){
                    location[i + 1][j] += toggle[i][j];
                }
                if(j != 2){
                    location[i][j + 1] += toggle[i][j];
                }
                if( i != 0){
                    location[i - 1][j] += toggle[i][j];
                }
                if(j != 0){
                    location[i][j - 1] += toggle[i][j];
                }
            } 
        }
    }

    for(vector<int> v : location){
        for(auto i : v){
            std::cout << i % 2;
        }
        cout << "\n";
    }
    return 0;
}
