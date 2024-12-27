#include <stdio.h>

void Swap(int * a, int * b){
    int temp = *b;
    *b = *a;
    *a = temp;
}

void SelectionSort(int arr[], int size){
    for(int i = 0; i < size; i++){
        for(int j = i + 1; j < size; j++){
            if(arr[i] > arr[j]){
                Swap(&arr[i], &arr[j]);
            }
        }
    }
}


int main(){
    int arr[8] = {8, 43, 65, 32, 86, 23, 999, 0};
    int size = sizeof(arr) / sizeof(arr[0]);

    SelectionSort(arr, size);
}