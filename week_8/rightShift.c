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
        int n, r;
        scanf("%d %d",&n,&r);
        printf("%d\n",n*(n>>r));
    }
    return 0;
}
