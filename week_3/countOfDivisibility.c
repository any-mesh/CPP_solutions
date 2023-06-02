#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{int i,l,r,k,count=0;
    scanf("%d\n%d\n%d\n",&l,&r,&k);
        if(k>l&&k>r)
            printf("value of k is suppose longer");
    if (r>l)
        { for(i=l;i<=r;i++)
        {
            if(i%k==0)
                count++;
        }
            printf("%d",count);
        }
    else if (l>r)
    {
        for(i=r;i<=l;i++)
        {
            if (i%k==0)
                count++;
        }
        printf("%d",count++);
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}