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
        long int n;
        scanf("%ld",&n);
        int even = 0;
        int odd = 0;
        int digits = 0;
        while(n>0)
        {
            int a = n % 10;
            if(digits%2==0)
                even += a;
            else
                odd += a;
            digits++;
            n/=10;
        }
        if(digits%2==0)
            printf("%d\n",odd);
        else
            printf("%d\n",even);
    }
    return 0;
}
