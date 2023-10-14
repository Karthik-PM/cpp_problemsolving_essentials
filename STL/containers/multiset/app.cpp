#include <bits/stdc++.h>
using namespace std;

void display_set(multiset<int> ms){
    for(auto i : ms) cout << i << " ";
    cout << "\n";
}

// in multiset duplicates can be accomodated, and will be arranged in a sorted manner
int main(int argc, char const *argv[])
{
    multiset<int> ms;
    ms.insert(1);
    ms.insert(2);
    ms.insert(3);
    ms.insert(1);
    ms.insert(2);
    display_set(ms);

    // erase by element
    ms.erase(1);
    display_set(ms);
    // erase single element
    ms.erase(ms.find(2)); // find the element and returns its address and then erase the element of the pirticular address
    display_set(ms);

    return 0;
}