#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int n = 9;
    int arr[9];
    int count[100] = {0};
    for(int i = 0 ; i < n ; i++)
    {
        scanf("%d",&arr[i]);
        count[arr[i]]++;
    }
    for(int i = 1 ; i < 100 ; i++)
    {
        if(count[i] != 0)
        {
            printf("%d %d\n",i,count[i]);
        }
    }
    return 0;
}
