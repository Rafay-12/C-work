#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    int n,i;
    char *ptr;
    i = 1;
    while (i < 4)
    {
        printf("\nemployee  %d: Enter the length of your id\n",i);
        scanf("%d", &n);
        ptr = (char *)malloc(n * sizeof(char) + 1);
        printf("\nemployee  %d: Enter the your id\n",i);
        scanf("%s", ptr);
        printf("\nthe id of %d employee is %s\n",i,ptr);
        free(ptr);
        i++;
    }
    getch();
}