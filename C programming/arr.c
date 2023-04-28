#include<stdio.h>
#include<conio.h>
void rev(int arr[]){
    for (int i = 0; i < 8/2; i++)
    {
        int temp = arr[i];
        arr[i] = arr[7-i];
        arr[7-i] = temp;
    }
    
}
void print_array(int arr[]){
    for (int i = 0; i < 8; i++)
    {
        printf("the %d element of array is %d\n", i, arr[i]);
    }
}
void main(){
    int arr[] = {1,2,4,6,7,9,6,8}; 
    print_array(arr);
    rev(arr);
    printf("\n");
    print_array(arr);
    getch();
}