#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n;
    scanf("%d", &n);
    int arr[n][2];
    for(int i = 0 ; i < n ; i++)
    {
        for(int j = 0 ; j < 2 ; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    bool flag;
    for(int i = 0 ; i < n ; i++)
    {
        flag = true;
        for(int j = 0 ; j < n ; j++)
        {
            if(arr[i][0] > arr[j][0] && arr[i][1] < arr[j][1])
            {
                flag = false;
            }
        }
        if(flag)
        printf("%d %d\n", arr[i][0], arr[i][1]);
    }
    return 0;
}
