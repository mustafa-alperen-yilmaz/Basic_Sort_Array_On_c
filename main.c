#include <stdio.h>
#include <stdlib.h>

void change(int*a , int*b){
int temp;
temp=*a;
*a=*b;
*b=temp;

}
void selectionSort(int arr[], int n)
{
    int i, j, min;
    for (i = 0; i < n - 1; i++) {
        min = i;
        for (j = i + 1; j < n; j++)
            if (arr[j] < arr[min])
                min = j;
        change(&arr[min], &arr[i]);
    }
}

void printArray(int arr[], int size)
{
    int i;
    for (i = 0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");

int main()
{
    int arr[] = { 0, 23, 14, 12, 9 };
    int n = sizeof(arr) / sizeof(arr[0]);
    printf("Original array: \n");
    printArray(arr, n);

    selectionSort(arr, n);
    printf("\nSorted array in Ascending order: \n");
    printArray(arr, n);

    return 0;
}
