#include <stdio.h>

void bubbleSort(int array[], int size);

int main(){

    int array[] = {5, 4, 3, 2, 1};
    int size = sizeof(array) / sizeof(array[0]);

    bubbleSort(array, size);

    for(int i = 0; i < size; i++)
        printf("%d ", array[i]);

    return 0;
}

// void bubbleSort(int array[], int size); can't use this line here

void bubbleSort(int array[], int size){
    for(int i = 0; i < size - 1; i++){
        for(int j = 0; j < size - 1 - i; j++){
            if (array[j] > array[j + 1]){ // for descending order, change > to <
                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
}