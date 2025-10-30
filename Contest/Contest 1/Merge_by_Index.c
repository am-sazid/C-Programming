#include<stdio.h>

int main()
{
    char s1[1001];
    char s2[1001];
    scanf("%s",s1);
    scanf("%s",s2);
    int st,en;
    scanf("%d %d",&st,&en);
    char s3[1001] = "";
    int j = 0;
    for (int i = st; i <= en; i++)
    {
        s3[j] += s2[i];
        j++;
    }
    printf("%s%s",s1,s3);
    return 0;
}