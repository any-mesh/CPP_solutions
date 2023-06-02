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
        int k, n;
        scanf("%d %d",&k,&n);
        int sum = 0;
        for(int i = 1 ; i <= n ; i++)
        {
            sum += i % k;
        }
        printf("%d\n",sum);
    }
    return 0;
}
