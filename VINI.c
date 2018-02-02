#include <stdio.h>
int main()
{
    char c;
    int L1, U1;
    printf("Enter an alphabet ");
    scanf("%c",&c);
    LowercaseVowel = (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
    UppercaseVowel = (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');
    if (L1 || U1)
        printf("%c is a vowel", c);
    else
        printf("%c is a consonant", c);

}
