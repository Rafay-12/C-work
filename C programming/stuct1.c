#include<stdio.h>
#include<conio.h>
#include<string.h>
// Structure
struct Student
{
    char name[70];
    int id;
    char address[70];
};
struct Student harry, Aslam;
void print_information(struct Student var,struct Student var1){
    printf("your name is %s,Your id is %d,Your address is %s\n",var.name,var.id,var.address);
    printf("your name is %s,Your id is %d,Your address is %s\n",var1.name,var1.id,var1.address);
}
// Union
union Employee
{
    int id;
    char name[70];
    char position[70];

}Rafay;
void print_information1(union Employee var){
    printf("your name is %s,Your id is %d,Your address is %s\n",var.name,var.id,var.position);
}

int main()
{
    // structure related
    strcpy(harry.name,"Harry");
    harry.id = 1234;
    strcpy(harry.address,"Abc road");
    strcpy(Aslam.name,"Aslam");
    Aslam.id = 5534;
    strcpy(Aslam.address,"gef road");
    print_information(harry,Aslam);
    // union related
    Rafay.id = 6565;
    printf("id before intalizing name and position:\"%d\"\n",Rafay.id);
    strcpy(Rafay.name, "Rafay");
    printf("name before initalizing position:\"%s\"\n",Rafay.name);
    strcpy(Rafay.position, "programmer");
    print_information1(Rafay);
    return 0;
}
