#include <stdio.h>
#include <stdlib.h>

void mergeSort(int array[], int length);
void merge(int leftArray[], int leftSize, int rightArray[], int rightSize, int array[]);

int main(){
    int array[] = {5, 4, 3, 2, 1, 10, 9};
    int length = sizeof(array) / sizeof(array[0]);

    mergeSort(array, length);

    for(int i = 0; i < length; i++)
        printf("%d ", array[i]);
    
    return 0;
}

void mergeSort(int array[], int length){
    if (length <= 1)
        return;
    
    int middle = length / 2;
    int* leftArray = (int*)malloc(middle * sizeof(int));
    int* rightArray = (int*)malloc((length - middle) * sizeof(int));

    int j = 0;
    for(int i = 0; i < length; i++){
        if(i < middle)
            leftArray[i] = array[i];
        else{
            rightArray[j] = array[i];
            j++;
        }
    }

    mergeSort(leftArray, middle);
    mergeSort(rightArray, length - middle);
    merge(leftArray, middle, rightArray, length - middle, array);

    free(leftArray);
    free(rightArray);
}

void merge(int leftArray[], int leftSize, int rightArray[], int rightSize, int array[]){
    int i = 0, l = 0, r = 0; // indices

    // merge the two arrays into the original array
    while (l < leftSize && r < rightSize){
        if (leftArray[l] < rightArray[r]){
            array[i] = leftArray[l];
            l++;
            i++;
        }
        else{
            array[i] = rightArray[r];
            i++;
            r++;
        }
    }

    // copy remaining elements of leftArray
    while(l < leftSize){
        array[i] = leftArray[l];
        i++;
        l++;
    }
    
    // copy remaining elements of rightArray
    while(r < rightSize){
        array[i] = rightArray[r]; // this process can be made shorter: array[i++] = rightArray[r++];
        i++;                      // this allows the increment lines to be removed.
        r++;
    }
}