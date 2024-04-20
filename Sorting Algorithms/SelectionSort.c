#include <stdio.h>

void selectionSort(int array[], int size);

int main(){
    int array[] = {5, 4, 3, 2, 1, 7};
    int size = sizeof(array) / sizeof(array[0]);

    selectionSort(array, size);

    for(int i = 0; i < size; i++)
        printf("%d ", array[i]);

    return 0;
}

void selectionSort(int array[], int size){
    for(int i = 0; i < size - 1; i++){
        int min = i;
        for(int j = i + 1; j < size; j++){
            if (array[min] > array[j])
                min = j;
        }

        // swapping
        int temp = array[i];
        array[i] = array[min];
        array[min] = temp;
    }
}