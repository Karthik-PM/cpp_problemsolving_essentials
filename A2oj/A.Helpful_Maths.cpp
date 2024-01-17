#include<bits/stdc++.h>

int main(int argc, char const *argv[])
{
    std::string input; 
    std::cin >> input;

    std::vector<int> nums;
    for(char c : input){
        if(c != '+'){
            nums.push_back(c - '0');
        }
    }
    std::sort(nums.begin(), nums.end());
    int nums_end = nums[nums.size() - 1];
    nums.pop_back();
    for(auto i : nums){
        std::cout << i << "+";
    }
    std::cout << nums_end << "\n";
    return 0;
}
