#include <stdio.h>

int display(int arr[], int size);
int deletion(int arr[], int size, int index);

int display(int arr[], int size )
{
    for (int i = 0; i < size; i++)
    {
        printf("%d  ", arr[i]);
    }
    printf("\n");
}

int deletion(int arr[], int size, int index)
{
    for (int i = index; i < size ; i++)
    {
        arr[i - 1] = arr[i];
    }
}
int main()
{
    int arr[100] = {10, 15, 20, 25, 30};
    int size = 5, index = 5;
    display(arr, size);

    deletion(arr, size, index);
    size--;

    display(arr,size);
    return 0;
}