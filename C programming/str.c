#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
    char str[] = "Hello";
    char str1[] = "World";
    strcat(str,str1);
    printf("%s\n",str);
    printf("%d\n",strlen(str));
    strrev(str);
    puts(str);
    return 0;
}
