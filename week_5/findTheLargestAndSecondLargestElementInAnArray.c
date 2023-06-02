#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <limits.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n = 6;
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
    printf("%d\n%d",max,max2);
    
    return 0;
}
