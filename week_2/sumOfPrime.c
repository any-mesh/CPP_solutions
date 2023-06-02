#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int isprime(int n)
{
    int c = 0;
    for(int i = 2 ; i < n ; i++)
    {
        if(n%i==0)
            c++;
    }
    if(c >= 1)
        return 0;
    else
        return 1;
}

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int t;
    scanf("%d",&t);
    for(int i = 0 ; i < t ; i++)
    {
        int n;
        int sum = 0;
        scanf("%d",&n);
        for(int i = 2 ; i < n ; i++)
        {
            if(isprime(i)) {
                sum += i;
            }
        }
        printf("%d\n",sum);
    }
    return 0;
}
