#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int m, n;
    scanf("%d %d",&m,&n);
    int arr[m][n];
    for(int i = 0 ; i < m ; i++)
    {
        for(int j = 0 ; j < n ; j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    int ans = -1;
    for(int i = 0 ; i < m ; i++)
    {
        int min = arr[i][0], col = 0;
        for(int j = 0 ; j < n ; j++)
        {
            if(min > arr[i][j])
            {
                min = arr[i][j];
                col = j;
            }
        }
        int k;
        for(k = 0 ; k < n ; k++)
        {
            if(min < arr[k][col])
                break;
        }
        if(k==n)
            ans = min;
    }
    printf("%d",ans);
    return 0;
}
