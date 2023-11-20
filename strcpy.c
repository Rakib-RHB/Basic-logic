#include<stdio.h>
#include<string.h>
int main()
{
    char s1[30]="Rakib";
    char s2[30]="Hasan";
    strncpy(s2,s1,2);
    printf("%s",s2);
}
