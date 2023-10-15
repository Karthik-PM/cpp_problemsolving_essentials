#include <bits/stdc++.h>
using namespace std;

// accessing elements with auto
void display_vector(vector<int> v){
    for(auto i : v) cout << i << " ";
    cout << "\n";
}

void display_vector_pair(vector<pair<int, int>> v){
    for(auto i : v) cout << i.first << " " << i.second << "\n";
}

// accessing elements with iteratiors
int main(int argc, char const *argv[])
{
    vector<int> v(10, 0); // creates vector with all zeros of size 10
    display_vector(v);

    // pair vector
    vector<pair<int, int>> pair_vec;

    cout << "pair input\n";
    // push back approach 1
    pair_vec.push_back(pair<int, int> (1, 2));
    // approach 2
    pair_vec.emplace_back(3,4);

    // copying the vector to another vector
    cout << "all elements copied\n";
    vector<pair<int, int>> v2(pair_vec);
    display_vector_pair(v2);
    cout << "first two elements copied\n";
    vector<pair<int, int>> v3(pair_vec.begin(), pair_vec.begin() + 2);
    display_vector_pair(v3);


    // standard functions
    vector<int> vb = {1, 2, 3, 4, 5};
    vb.erase(vb.begin() + 1, vb.begin() + 3);

    display_vector(vb);
    // insert any location
    vb.insert(vb.begin() + 1, 3); 

    // increase the occurences of the location 
    // lets put two occurences of 5 in vector vb at index 2
    vb.insert(vb.begin() + 2, 2, 5);

    display_vector(vb);
    // insert a subset of a vector

    vector<int> va1 = {1, 2, 3};
    vector<int> va2 = {0, 3, 8};

    // swaping vector
    va1.swap(va2);
    display_vector(va1);
    display_vector(va2);
    // adding contents of va2 to va1 in the 1st index
    va1.insert(va1.begin() + 1, va2.begin(), va2.end());
    display_vector(va1);
    return 0;
}
