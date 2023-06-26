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
        int diff[n-1];
        for(int i = 0 ; i < n - 1 ; i++)
        {
            diff[i] = abs(arr[i] - arr[i+1]);
        }
        int count;
        int flag = 1;
        if(diff[0] == 1)
        {
            count = 1;
            for(int i = 0 ; i < n - 1 ; i++)
            {
                if(diff[i] != count)
                {
                    printf("Incorrect Formation\n");
                    flag = 0;
                    break;
                }
                count++;
            }
        }
        else
        {
            count = n - 1;
            for(int i = 0 ; i < n - 1 ; i++)
            {
                if(diff[i] != count)
                {
                    printf("Incorrect Formation\n");
                    flag = 0;
                    break;
                }
                count--;
            }
        }
        if(flag)
            printf("Correct Formation\n");
    }
    return 0;
}
