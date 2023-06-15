#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <limits.h>

int decimal(int n)
{
    int num = n;
    int dec_value = 0;
  
    // Initializing base value to 1, i.e 2^0
    int base = 1;
  
    int temp = num;
    while (temp) {
        int last_digit = temp % 10;
        temp = temp / 10;
  
        dec_value += last_digit * base;
  
        base = base * 2;
    }
  
    return dec_value;
}

void binary(int n)
{
    // array to store binary number
    int binaryNum[32];
  
    // counter for binary array
    int i = 0;
    while (n > 0) {
        // storing remainder in binary array
        binaryNum[i] = n % 2;
        n = n / 2;
        i++;
    }
  
    // printing binary array in reverse order
    for (int j = i - 1; j >= 0; j--)
        printf("%d", binaryNum[j]);
}

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i = 0 ; i < n ; i++)
    {
        scanf("%d",&arr[i]);
    }
    int max = INT_MIN;
    int max2 = INT_MIN;
    for(int i = 0 ; i < n ; i++)
    {
        if(max < arr[i])
        {
            max2 = max;
            max = arr[i];
        }
        else
        {
            if(max2 < arr[i])
                max2 = arr[i];
        }
    }
    int ans = decimal(max) * decimal(max2);
    binary(ans);
    return 0;
}
