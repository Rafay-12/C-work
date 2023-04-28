#include <stdio.h>
#include <conio.h>
#include <string.h>
struct driver
{
    char name[30];
    char driving_liscence[30];
    char route[30];
    int km;
};

int main()
{

    int n, i;
    printf("enter the number of drivers:\n");
    scanf("%d", &n);

    struct driver drivers[n];

    for (i = 1; i < n+1; i++)
    {
        printf("Enter the name of driver%d:\n", i);
        getchar();
        fgets(drivers[i].name, 30, stdin);
        printf("\nEnter the driving liscence of driver%d:\n", i);
        getchar();
        fgets(drivers[i].driving_liscence, 30, stdin);
        printf("\nEnter the route of driver%d:\n", i);
        getchar();
        fgets(drivers[i].route, 30, stdin);
        printf("\nEnter how much kilometres did driver%d drive car:\n", i);
        scanf("%d", &drivers[i].km);
    }

    printf("\n-----------The information of drivers are as fellows----------------\n\n");

    for (i = 0; i < n+1; i++)
    {
        printf("the name of driver%d is %s \n", i, drivers[i].name);
        printf("the driving liscence of driver%d is %s \n", i, drivers[i].driving_liscence);
        printf("the route of driver%d is %s \n", i, drivers[i].route);
        printf("the driver%d drives the car %d kms \n", i, drivers[i].km);
    }
    getch();
    return 0;
}