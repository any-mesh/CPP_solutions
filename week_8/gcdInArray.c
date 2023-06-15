#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <limits.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i = 0 ; i < n ; i++)
    {
        scanf("%d",&arr[i]);
    }
    int max = INT_MIN;
    int max2 = INT_MIN;
    for(int i = 0 ; i < n ; i++)
    {
        if(max < arr[i])
        {
            max2 = max;
            max = arr[i];
        }
        else
        {
            if(max2 < arr[i])
                max2 = arr[i];
        }
    }
    int gcd;
    for(int i = 1 ; i <= max2 ; i++)
    {
        if(max%i == 0 && max2%i == 0)
            gcd = i;
    }
    printf("%d\n",gcd);
    return 0;
}
