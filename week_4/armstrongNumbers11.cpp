#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

bool isArmstrong(int n)
{
    int digits = 0;
    int temp = n;
    while(n > 0)
    {
        digits++;
        n /= 10;
    }
    n = temp;
    int sum = 0;
    while(n > 0)
    {
        int a = n % 10;
        sum += pow(a, digits);
        n /= 10;
    }
    if(sum == temp)
        return true;
    else
        return false;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int t;
    cin >> t;
    for(int i = 0 ; i < t ; i++)
    {
        int a, b;
        cin >> a >> b;
        for(int i = a ; i <= b ; i++)
        {
            if(isArmstrong(i))
                cout << i << " ";
        }
        cout << endl;
    }
    return 0;
}
