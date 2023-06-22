#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int n;
    scanf("%d",&n);
    int arr[n];
    int count;
    for(int i = 0 ; i < n ; i++)
    {
        count = 0;
        scanf("%d",&arr[i]);
        for(int j = 1 ; j <= arr[i] ; j++)
        {
            if(arr[i] % j == 0)
                count++;
        }
        if(count == 3)
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}
