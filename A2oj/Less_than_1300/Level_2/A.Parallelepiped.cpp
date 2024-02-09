#include <bits/stdc++.h>

int main(int argc, char const *argv[])
{
    int s1, s2, s3; 
    std::cin >> s1 >> s2 >> s3;
    int a = std::sqrt(s1*s2/s3);
    int b = std::sqrt(s2*s3/s1);
    int c = std::sqrt(s1*s3/s2);
    std::cout << 4 * (a + b + c) << "\n";
    return 0;
}
