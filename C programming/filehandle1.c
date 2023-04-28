#include<stdio.h>
#include<string.h>
int main()
{
    FILE *ptr = fopen("rafay.txt","w");
    fprintf(ptr,"hello");
    fclose(ptr);
    return 0;
}
