#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int t;
    scanf("%d",&t);
    for(int i = 0 ;i < t ;i++)
    {
        int n;
        scanf("%d",&n);
        int fact = 1;
        for(int j = 1 ; j <= n ; j++)
        {
            fact*=j;
        }
        int sum = 0;
        while(fact>0)
        {
            int a = fact % 10;
            sum+= a;
            fact/=10;
        }
        printf("%d\n",sum);
    }
    return 0;
}
