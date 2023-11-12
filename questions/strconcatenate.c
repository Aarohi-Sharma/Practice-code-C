#include<stdio.h>
#include<string.h>
int main()
{
    char a[100]="I am girl", b[100]="I like to code";
    char *p, *q;
    p=a; q=b;
    printf ("Strings are, a=%s, b=%s\n", a, b);
    while (*p);
    p++;
    while (*q);
    {
        *p=*q;
        p++;
        q++;
    }
    *p='\0';
    printf ("Strings after concatenation are, %s", a);
    return 0;
}
