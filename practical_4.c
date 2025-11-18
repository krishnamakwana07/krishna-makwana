#include <stdio.h>
#include <limits.h>
#include <float.h>

int main() {
    printf("---------- Data Type Sizes and Ranges in C ----------\n\n");

    printf("Data Type: char\n");
    printf("Size: %zu bytes\n", sizeof(char));
    printf("Range: %d to %d\n\n", CHAR_MIN, CHAR_MAX);

    printf("Data Type: unsigned char\n");
    printf("Size: %zu bytes\n", sizeof(unsigned char));
    printf("Range: 0 to %u\n\n", UCHAR_MAX);

    printf("Data Type: int\n");
    printf("Size: %zu bytes\n", sizeof(int));
    printf("Range: %d to %d\n\n", INT_MIN, INT_MAX);

    printf("Data Type: unsigned int\n");
    printf("Size: %zu bytes\n", sizeof(unsigned int));
    printf("Range: 0 to %u\n\n", UINT_MAX);

    printf("Data Type: short int\n");
    printf("Size: %zu bytes\n", sizeof(short int));
    printf("Range: %d to %d\n\n", SHRT_MIN, SHRT_MAX);

    printf("Data Type: unsigned short int\n");
    printf("Size: %zu bytes\n", sizeof(unsigned short int));
    printf("Range: 0 to %u\n\n", USHRT_MAX);

    printf("Data Type: long int\n");
    printf("Size: %zu bytes\n", sizeof(long int));
    printf("Range: %ld to %ld\n\n", LONG_MIN, LONG_MAX);

    printf("Data Type: unsigned long int\n");
    printf("Size: %zu bytes\n", sizeof(unsigned long int));
    printf("Range: 0 to %lu\n\n", ULONG_MAX);

    printf("Data Type: long long int\n");
    printf("Size: %zu bytes\n", sizeof(long long int));
    printf("Range: %lld to %lld\n\n", LLONG_MIN, LLONG_MAX);

    printf("Data Type: unsigned long long int\n");
    printf("Size: %zu bytes\n", sizeof(unsigned long long int));
    printf("Range: 0 to %llu\n\n", ULLONG_MAX);

    printf("Data Type: float\n");
    printf("Size: %zu bytes\n", sizeof(float));
    printf("Range: %e to %e\n", FLT_MIN, FLT_MAX);
    printf("Precision: %d digits\n\n", FLT_DIG);

    printf("Data Type: double\n");
    printf("Size: %zu bytes\n", sizeof(double));
    printf("Range: %e to %e\n", DBL_MIN, DBL_MAX);
    printf("Precision: %d digits\n\n", DBL_DIG);

    printf("Data Type: long double\n");
    printf("Size: %zu bytes\n", sizeof(long double));
    printf("Range: %Le to %Le\n", LDBL_MIN, LDBL_MAX);
    printf("Precision: %d digits\n", LDBL_DIG);

    return 0;
}
