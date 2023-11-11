#include <stdio.h>
int main() 
{
    FILE* fp = fopen("file.txt", "r");
    if (fp == NULL)
    {
        printf("Could not open file.");
        return 1;
    }
    int c;    
    int count = 0;
    for (c = getc(fp); c != EOF; c = getc(fp))
        if (c == '\n')
        count = count + 1;
    printf("The file has %d line(s)\n", count);
    fclose(fp);
    return 0;
}
