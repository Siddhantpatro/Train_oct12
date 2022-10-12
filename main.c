#include <stdio.h>
#include <stdlib.h>

int newAdd(int a, int b)
{
    int add;
    add = a+b;
    printf("%d\n", add);
    return 0;
}

int main()
{
    int a = 10, b = 2;
    newAdd(a,b);
    return 0;
}
