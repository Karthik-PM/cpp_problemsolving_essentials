#include <bits/stdc++.h>
using namespace std;

void displaySet(set<int> s){
    for(auto i : s){
        cout << i << " ";
    }
    cout << "\n";
}
int main(int argc, char const *argv[])
{
    // stores everything in a sorted order and everything as unique
    set<int> s;
    s.insert(1);
    s.insert(2);
    s.insert(5);
    s.insert(4);

    auto it = s.find(6);
    displaySet(s);
    if(it != s.end()){
        std::cout << "element present\n";
    }else{
        std::cout << "element not present\n";
    }

    s.erase(4);
    displaySet(s);
    return 0;
}
