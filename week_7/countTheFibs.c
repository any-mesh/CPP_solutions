#include <stdio.h>

int count;

void findFibonacciInRange(long long x, long long y) {
    long long fib1 = 0, fib2 = 1, fib3;

    fib3 = fib1 + fib2;

    while (fib3 < y) {
        if (fib3 > x && fib3 < y)
            count++;
        fib1 = fib2;
        fib2 = fib3;
        fib3 = fib1 + fib2;
    }
}

int main() {
    int t;
    scanf("%d",&t);
    while(t--)
    {
        long long x, y;
        scanf("%lld %lld", &x, &y);
        count = 0;
        findFibonacciInRange(x, y);
        printf("%d\n",count);
    }
    return 0;
}
