#include<bits/stdc++.h>

int main(int argc, char const *argv[])
{
    int n,k,l,c,d,p,nl,np;
    std::cin >> n >> k >> l >> c >> d >> p >> nl >> np;
    int total_drink_volume = k * l;

    int toasts_drink = total_drink_volume / nl;
    int toasts_limes = c * d;
    int toasts_salt = p / np;
    int total_toast_each = std::min(toasts_limes, std::min(toasts_drink, toasts_salt)) / n;
    std::cout << total_toast_each << "\n";
    return 0;
}