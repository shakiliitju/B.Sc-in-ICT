#include <stdio.h>
#include <limits.h>
#include <float.h>

int main()
{
    printf("Storage size for int: %d\n",sizeof(int));

    printf("Storage size for float: %d\n",sizeof(float));

    printf("Minimum float positive value : %E\n",FLT_MIN);

    printf("Maximum float positive value : %E\n",FLT_MAX);

    printf("Precision value: %d\n",FLT_DIG);

    printf("Storage size for double: %d\n",sizeof(double));

    printf("Storage size for long long: %d\n",sizeof(long long));



    return 0;
}
