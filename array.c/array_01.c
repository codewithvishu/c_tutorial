#include<stdio.h>

//for insertion
void insert(int arr[] , int  size , int  index , int  value);

//for display
int display(int arr[] , int size);


void insert(int arr[], int  size , int  index , int  value){
    for(int i = size-1 ; i>=index-1 ; i--){
        arr[i+1] = arr[i];
    }
    arr[index-1] = value;
}

int display(int arr[], int size){
    for(int i =0 ; i<size ; i++){
        printf("%d  ",arr[i]);
    }
    printf("\n");
}


int main(){
    int arr[100] = {10,20,25,30};
    int size = 4 , index = 2 , value = 15;
     
    display(arr , size); 
    

    insert(arr , size , index , value);
     size++;

    display(arr , size); 
    return 0;
}