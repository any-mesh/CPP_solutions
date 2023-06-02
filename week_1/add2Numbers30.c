#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int t;
    scanf("%d",&t);
    for(int i = 0 ;i <t;i++)
    {
        int a , b;
        scanf("%d %d",&a,&b);
        int sum = a + b;
        printf("%d\n",sum);
    }
    return 0;
}
