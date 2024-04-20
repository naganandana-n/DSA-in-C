// code gives EXC_BAD_ACCESS when running on VScode
// but runs fine on OnlineGDB (https://www.onlinegdb.com)

#include <stdio.h>

void quickSort(int array[], int start, int end);
int partition(int array[], int start, int end);

int main(){
    int array[] = {5, 4, 3, 2, 1, 385};
    int length = sizeof(array) / sizeof(array[0]);

    quickSort(array, 0, length - 1);

    for(int i = 0; i < length; i++)
        printf("%d ", array[i]);

    return 0;
}

void quickSort(int array[], int start, int end){
    if (end <= start)
        return; // base case
    
    int pivot = partition(array, start, end);
    quickSort(array, start, pivot - 1);
    quickSort(array, pivot + 1, end);
}

int partition(int array[], int start, int end){
    int pivot = array[end];
    int i = start - i;

    for (int j = start; j < end - 1; j++){
        if (array[j] < pivot){
            i++;
            int temp = array[i]; // swap
            array[i] = array[j];
            array[j] = temp;
        }
    }

    i++;
    int temp = array[i]; // swap
    array[i] = array[end];
    array[end] = temp;
    return i; // location of pivot
}