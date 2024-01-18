#include<bits/stdc++.h>

int main(int argc, char const *argv[])
{
    std::string str; 
    std::cin >> str;

    std::vector<char> vals; // store all distinct characters
    std::vector<char>::iterator it;
    for(char c : str){
        it = std::find(vals.begin(), vals.end(), c);
        if(it == vals.end()){ // if not found 
            vals.push_back(c);
        }
    }
    std::string res = (vals.size() % 2 == 0) ? "CHAT WITH HER!\n" : "IGNORE HIM!";
    std::cout << res << "\n";
    return 0;
}
