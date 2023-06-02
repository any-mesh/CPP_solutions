#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int n;
    scanf("%d",&n);
    int sum = 0;
    for(int i = 1 ; i< n ;i++)
    {
        if(n%i==0)
            sum+=i;
    }
    if(sum == n)
        printf("yes");
    else
        printf("no");
    return 0;
}
