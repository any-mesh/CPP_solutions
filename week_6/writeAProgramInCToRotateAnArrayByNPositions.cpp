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
    int k;
    cin >> k;
    int arr[n];
    for(int i = 0 ; i < n ; i++)
    {
        cin >> arr[i];
        cout << arr[i] << " ";
    }
    cout << endl;
    int ans[n];
    for(int i = 0 ; i < n ; i++)
    {
        ans[(i + k) % n] = arr[i];
    }
    for(int i = 0 ; i < n ; i++)
    {
        cout << ans[i] << " ";
    }
    return 0;
}
