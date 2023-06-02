#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    vector<int> v;
    for(int i = 0 ; i < 6 ; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }
    v.erase(v.begin() + 2);
    for(int i = 0 ; i < 5 ; i++)
    {
        cout << v[i] << " ";
    }
    
    return 0;
}
