#include<stdio.h>
int insertion(int arr[],int element,int index,int total_size,int used_size){
    if(total_size<=used_size){
        return 0;
    }
    else{
        for (int i = used_size-1; i > index; i--)
        {
            arr[i+1]=arr[i];
        }
        arr[index]=element;
        return 1;
    }
}
void display(int arr[],int length){
    for(int i=0;i<length;i++){
        printf("%d,",arr[i]);
    }
}
int deletion(int arr[],int index,int used_size){
    for (int i = index; i < used_size-1; i++)
    {
        arr[index] = arr[index+1];
    }
}
int main(){
    int arr[7]= {1,3,45,5};
    int l = sizeof(arr)/sizeof(int);
    insertion(arr,15,2,7,4);
    display(arr,l);
}
