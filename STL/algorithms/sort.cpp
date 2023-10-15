#include <bits/stdc++.h>
using namespace std;

void display(int arr[], int n){
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << "\n";
}

void display_vector(vector<int> v){
    for(auto i : v){
        cout << i << " ";
    }
    cout << "\n";
}

void display_pair(pair<int, int> arr[], int n){
    for(int i = 0; i < n; i++){
        cout << arr[i].first << " " << arr[i].second << "\n";
    }
}
bool condition(pair<int, int> p1, pair<int, int> p2){
    if(p1.second < p2.second) return true;
    if(p1.first < p2.first) return true;
    return false;
}

int main(int argc, char const *argv[])
{
    int arr[] = {1, 2, 9, 0, -1, 3, 8};
    int n = sizeof(arr)/sizeof(arr[0]);
    vector<int> v(arr, arr + n);

    // sorting array
    sort(arr, arr + n);
    display(arr, n);

    // sorting vector
    // sorting 1 to 4 elements
    sort(v.begin(), v.begin() + 3);
    display_vector(v);
    sort(v.begin(), v.end());
    display_vector(v);

    // decending order sort
    sort(arr, arr + n, greater<int>());
    display(arr, n);

    // sort with comparison
    pair<int, int> arr_pair[] = {{1, 2}, {3, 1}, {9, 6}, {0, -1}};
    n = sizeof(arr_pair) / sizeof(arr_pair[0]);
    sort(arr_pair, arr_pair + n, condition);
    display_pair(arr_pair, n);

    // telling the number of 1's in a number when in binary

    int num = 7;
    int cnt = __builtin_popcount(num);
    cout << cnt << "\n";
    // when integer is long long
    long long num1 = 7;
    cnt = __builtin_popcount(num1);
    cout << cnt << "\n";

    // finding next permutation

    string s = "123";
    do {
        cout << s << "\n";
    }while(next_permutation(s.begin(), s.end()));
    int maxi = *max_element(arr, arr + n);
    cout << maxi << "\n";

    return 0;
}