#include<stdio.h>
void insertionSort(int arr[], int n){
    int temp;
    for (int i = 1; i < n ; i++){
        for (int j = i; j >= 1 || arr[j-1] < arr[i]; j--){
            if (arr[j-1] > arr[j]){
                temp = arr[j-1];
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
}
int main(){
    // int len;
    // printf("Enter the length of the array:");
    // scanf("%d", &len);
    // int arr[len];
    // printf("Enter the elements of the array:");
    // for (int i = 0; i < len; i++){
    //     scanf("%d" , &arr[i]);
    // }
    int arr[] = { 20, 100, 28, 12, 9};
    int len = 5;
    insertionSort(arr,len);
    printArr(arr,len);
    return 0;
}