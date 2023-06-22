#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        int arr[n];
        for(int i = 0 ; i < n ; i++)
        {
            scanf("%d",&arr[i]);
        }
        for(int i = 0 ; i < n ; i++)
        {
            int max = -1;
            for(int j = i + 1 ; j < n ; j++)
            {
                if(max < arr[j])
                    max = arr[j];
            }
            arr[i] = max;
        }
        for(int i = 0 ; i < n ; i++)
        {
            printf("%d ",arr[i]);
        }
        printf("\n");
    }
    return 0;
}
