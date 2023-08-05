#include<stdio.h>

void selectionSort(int arr[], int n){
    int l;
    int temp;
    for (int i = 0 ; i < n-1 ; i++){
        l = 0;
        for (int j = 0; j < n - 1 - i; j++){
            if (arr[j] > arr[l]){
                l = j;
            }
        }
        temp = arr[n-1-i];
        arr[n-1-i] = arr[l];
        arr[l] = temp;
    }
}

void printArr(int arr[], int n){
    for (int i = 0; i < n; i++){
        printf("%d " , arr[i]);
    }
}

int main(){
    int arr[] = {20, 100, 28, 12, 9};
    int n = 5;
    selectionSort(arr,n);
    printArr(arr,n);
    return 0;
}