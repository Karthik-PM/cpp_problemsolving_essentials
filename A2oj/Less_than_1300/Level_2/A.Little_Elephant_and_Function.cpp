#include <bits/stdc++.h>

std::vector<int> f(int x, std::vector<int> arr){ // can do it without reccursion also
    if( x == 0 ){
        return arr;
    }
    std::swap(arr[x - 1], arr[x]);
    return f(x - 1, arr);
}

int main(int argc, char const *argv[])
{
    int n;
    std::cin >> n;
    std::vector<int> arr(n);
    int i = 0;
    while (i < n)
    {
        arr[i] = i + 1;
        i++;
    }

    arr = f(n - 1, arr);
    for(auto i : arr){
        std::cout << i << " ";
    }
    return 0;
}
