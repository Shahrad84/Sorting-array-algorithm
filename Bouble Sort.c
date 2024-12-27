#include <stdio.h>

void Swap(int * a, int * b){
    int temp = *b;
    *b = *a;
    *a = temp;
}

void BubbleSort(int * arr, int size){

    for(int i = size - 1; i > 0; i--){
        for(int j = 0; j < i; j++){
            if(arr[j] > arr[j + 1]){
                Swap(&arr[j], &arr[j + 1]);
            }
        }
    }
}

int main(){
    int arr[] = {2, -1, -3, 6, 7, 8, 6, 4, 5 ,2 ,5 ,0};
    int size = sizeof(arr) / sizeof(arr[0]);
    
    BubbleSort(arr, size);
}
