#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        int arr[n];
        for(int i = 0 ; i < n ; i++)
        {
            cin >> arr[i];
        }
        int ans = -1;
        int count;
        for(int i = 0 ; i < n ; i++)
        {
            count = 0;
            for(int j = 0 ; j < n ; j++)
            {
                if(arr[i] == arr[j])
                    count++;
            }
            if(count > n/2)
            {
                ans = arr[i];
                break;
            }
        }
        if(ans == -1)
            cout << "void" << endl;
        else
            cout << ans << endl;
    }
    return 0;
}
