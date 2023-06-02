#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int complement(int n)
{
    int bit_count = floor(log2(n)) + 1;
    int ones = (1 << bit_count) - 1;
    return ones ^ n;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int num;
    scanf("%d",&num);
    printf("%d",complement(num));
    
    return 0;
}