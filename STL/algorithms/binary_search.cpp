#include <bits/stdc++.h>
int binarySearch(int arr[], int l, int r, int val){
    if(r >= l){
        int mid = (r - l) / 2 + l;
        if(arr[mid] == val){
            return mid;
        }else if(arr[mid] > val){
            return binarySearch(arr, l, mid - 1, val);
        }else if(arr[mid] < val){
            return binarySearch(arr, mid + 1, r, val);
        }
    }
    return -1;
}

int main(int argc, char const *argv[])
{
    int arr[] = { 2, 3, 4, 10, 40 };
    int x = 10;
    int n = sizeof(arr) / sizeof(arr[0]);
    int result = binarySearch(arr, 0, n - 1, x); 
    std::cout << result << "\n";
    return 0;
}
