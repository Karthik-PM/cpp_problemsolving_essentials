#include <bits/stdc++.h>
void genrateSubarray(std::vector<int> vec, int start , int end){
    if(end == vec.size()) return;

    if(start > end) genrateSubarray(vec, 0, end + 1);
    else{
        for(int i = start; i < end; i++){
            std::cout << vec[i] << " ";
        }
        std::cout << vec[end] << "\n";
        genrateSubarray(vec, start + 1, end);
    }
    return;
}
int main(int argc, char const *argv[])
{
    std::vector<int> vec = {1, 2, 3};
    genrateSubarray(vec, 0, 0);
    return 0;
}
