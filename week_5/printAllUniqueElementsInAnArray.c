#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int n = 10;
    int arr[n];
    for(int i = 0 ; i < n ; i++)
    {
        scanf("%d",&arr[i]);
    }
    int count;
    for(int i = 0 ; i < n ; i++)
    {
        count = 0;
        for(int  j = 0 ; j < n ; j++)
        {
            if(arr[i] == arr[j])
                count++;
        }
        if(count == 1)
            printf("%d ", arr[i]);
    }
    return 0;
}
