#include <stdio.h>
#include <string.h>

int main()
{
    int t;
    scanf("%d", &t);
    char s[10001];

    for (int i = 0; i < t; i++)
    {
        int c = 0;
        int a = 0;
        int d = 0;
        scanf("%s", s);
        int len = strlen(s);
        for (int j = 0; j < len; j++)
        {
            if (s[j] >= 'A' && s[j] <= 'Z')
            {
                a++;
            }
            else if (s[j] >= 'a' && s[j] <= 'z')
            {
                c++;
            }
            else
            {
                d++;
            }
        }
        printf("%d %d %d\n", a, c, d);
    }

    return 0;
}