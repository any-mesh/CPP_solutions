#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int a, b;

int fib(int n)
{
    int c, i;
    if (n == 0)
        return a;
    for (i = 2; i <= n; i++) {
        c = a ^ b;
        a = b;
        b = c;
    }
    return b;
}

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d %d %d",&a,&b,&n);
        int ans = fib(n);
        printf("%d\n",ans);
    }
    return 0;
}
