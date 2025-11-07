#include <stdio.h>
#include <string.h>

int is_palindrome(char S[])
{
    int len = strlen(S);
    int i = 0;
    int j = len - 1;

    while (i < j)
    {
        if (S[i] != S[j])
            return 0; 
        i++;
        j--;
    }
    return 1; 
}

int main()
{
    char S[1001];
    scanf("%s", S);

    int result = is_palindrome(S);

    if (result == 1)
        printf("Palindrome\n");
    else
        printf("Not Palindrome\n");

    return 0;
}
