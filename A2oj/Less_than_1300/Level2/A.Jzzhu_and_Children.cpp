#include <bits/stdc++.h>

int main(int argc, char const *argv[])
{
    int n, m; 
    std::cin >> n >> m;
    int t = 1;
    int pos = 0;
    int max_sel = 0;
    for (t; t <= n; t++)
    {
        int res;
        std::cin >> res;
        int celing = std::ceil((float) res / m);
        if(celing >= max_sel){
            pos = t;
            max_sel = celing;
        }
    }

    std::cout << pos << "\n";
    return 0;
}
