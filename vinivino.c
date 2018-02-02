#include <stdio.h>
int main()
{
    int n1, n2, n3;

    printf("Enter three  numbers");
    scanf("%f", &n1, &n2, &n3);

    if( n1>=n2 && n1>=n3 )
        printf(" first is the largest number", n1);

    if( n2>=n1 && n2>=n3 )
        printf("sencond is the largest number", n2);

    if( n3>=n1 && n3>=n2 )
        printf("third is the largest number", n3);

    return 0;
}
