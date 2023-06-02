#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int t,gcd;
    scanf("%d",&t);
    for(int i = 0 ; i < t ;i++)
    {
        int a1, a2;
        scanf("%d %d",&a1,&a2);
        for(int j = 1 ; j <= a1 ; j++)
        {
            if(a1%j==0 && a2%j==0)
                gcd = j;
        }
        printf("%d\n",gcd);
    }
    return 0;
}
