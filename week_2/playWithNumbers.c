#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int t;
    scanf("%d",&t);
    for(int i = 0 ; i < t ; i++)
    {
        int n;
        scanf("%d",&n);
        if(n % 11 == 0)
            n += 2;
        else if(n % 4 == 0)
            n -= 2;
        else
            n *= 4;
        printf("%d\n",n);
    }
    return 0;
}
