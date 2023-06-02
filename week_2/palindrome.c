#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n1, n2;
    scanf("%d\n%d",&n1,&n2);
    int max =0;
    if(n1 >= 10 && n2 >= 10 && n1 < 100 && n2 < 100)
    {
        for(int i = 10 ; i <= n1 ; i++)
        {
            for(int j = 10 ; j <= n2 ; j++)
            {
                int n = i * j;
                int temp = n;
                int r = 0;
                while(temp>0)
                {
                    int a = temp % 10;
                    r = r * 10 + a;
                    temp/=10;
                }
                if(r==n)
                {
                    max = r;
                }
            }
        }
        printf("%d",max);
    }
    else 
        printf("Not a valid state");
    return 0;
}

