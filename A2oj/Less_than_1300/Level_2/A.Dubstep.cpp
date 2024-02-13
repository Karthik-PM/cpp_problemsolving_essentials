#include <bits/stdc++.h>

int main(int argc, char const *argv[])
{
    std::string str;
    std::cin >> str;
    int n = str.size();
    int i = 0;
    std::string result = "";
    int start_count = 0;
    bool flag = false;
    for(i = 0; i < n; i++){
        if((str[i] == 'W') && (str[i + 1] == 'U') && (str[i + 2] == 'B')){
            i += 2;
            if(!result.empty()) flag = true;
        }else{
            if(flag){
                result += " ";
                flag = false;
            }

            result += str[i];
        }
    }
    std::cout << result << "\n";
    return 0;
}
