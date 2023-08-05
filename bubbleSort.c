#include<stdio.h>

void bubbleSort(int arr[], int n){
    int temp;
    for (int i = 1 ; i < n; i++ ){
        for (int j = 1; j < n; j++){
            if (arr[j-1] > arr[j]){
                int temp = arr[j-1];
                arr[j-1] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

void printArr(int arr[], int n){
    for (int i = 0; i < n; i++){
        printf("%d " , arr[i]);
    }
    printf("\n");
}

int main(){
    int arr[] = { 20, 1, 28, 12, 9};
    int n = 5;
    bubbleSort(arr,n);
    printArr(arr,n);
    return 0;
}