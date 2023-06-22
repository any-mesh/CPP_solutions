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
    int sum;
    for(int i = 0 ; i < n ; i++)
    {
        sum = 0;
        for(int j = i ; j < n ; j++)
        {
            sum += arr[j];
            if(sum > max)
                max = sum;
        }
    }
    printf("%d",max);
    return 0;
}
