#include<stdio.h>
#include<stdlib.h>
typedef struct myarray
{
    int total_size;
    int used_size;
    int* ptr;
}myarr;

void create_array(myarr* a,int total,int used){
    a->total_size = total;
    a->used_size = used;
    a->ptr = (int*) malloc(sizeof(int)*total);
}
void setval(myarr* a){
    for (int i = 0; i < a->used_size; i++)
    {
        printf("Enter %d element of array",i+1);
        scanf("%d",&a->ptr[i]);
    }
}
void showval(myarr* a){
    for (int i = 0; i < a->used_size; i++)
    {
        printf("%d, ",a->ptr[i]);
    }
}
int insertion(int ptr[],int index,int element,int capcity,int used_size){
    if(capcity<=used_size){
        return 0;
    }
    else{
        for (int i=used_size; i>index;i--)
        {
            ptr[i+1]=ptr[i];
        }
        ptr[index]=element;
        return 1;
    }
}
int main(){
    // myarr marks;
    // create_array(&marks,20,4);
    // setval(&marks);
    // showval(&marks);
    int arr[6] = {2,4,5,6};
    insertion(arr,4,9,6,4);
    for (int i = 0; i < sizeof(arr)-1; i++)
    {
        printf("%d",arr[i]);
    }
    
}