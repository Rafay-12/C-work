#include <stdio.h>
#include <conio.h>
#include <string.h>
void parser(char arr[])
{
    int n = 0;
    int i;
    int index = 0;
    for (i = 0; i < strlen(arr); i++)
    {
        if (arr[i] == '<')
        {
            n = 0;
            continue;
        }
        else if (arr[i] == '>')
        {
            n = 1;
            continue;
        }
        if (n == 1)
        {
            arr[index] = arr[i];
            index++;
        }
    }
    arr[index] = '\0';
    
    
    while (arr[0] == ' ')
    {
        for (i = 0; i < strlen(arr); i++)
        {
            arr[i] = arr[i + 1];
        }
    }
    while (arr[strlen(arr) - 1] == ' ')
    {
        arr[strlen(arr) - 1] = '\0';
    }
    
    
}
int main()
{
    char string[] = "<h1>    this is a heading file       </h1>";
    parser(string);
    printf("%s", string);
    getch();

    return 0;
}
