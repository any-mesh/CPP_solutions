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
        int digits = -1;
        long int temp = n;
        while(temp>0)
        {
            digits++;
            temp/=10;
        }
        int first = n / pow(10,digits);
        int last = n % 10;
        printf("%d\n",first + last);
    }
    return 0;
}
