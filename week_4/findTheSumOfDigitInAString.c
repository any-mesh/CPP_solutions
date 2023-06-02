#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int size;
    scanf("%d",&size);
    char s[size + 1];
    for(int i = 0 ; i <= size ; i++)
    {
        scanf("%c",&s[i]);
    }
    int count = 0;
    printf("The digits present in the string is ");
    for(int i = 0 ; i <= size ; i++)
    {
        if(s[i] >= 48 && s[i] <= 57)
        {
            printf("%c",s[i]);
            count += s[i] - '0';
        }
    }
    printf("\n");
    printf("The sum of digits is %d",count);
    
    return 0;
}
