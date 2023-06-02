#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n;
    cin >> n;
    while(n>9)
    {
        int temp = n;
        int sum = 0;
        while(temp > 0)
        {
            int a = temp % 10;
            sum = sum + a;
            temp /= 10;
        }
        n = sum;
    }
    cout << n;
    return 0;
}
