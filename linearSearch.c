#include<stdio.h>

int linearSearch(int arr[], int n, int target){
    for (int i = 0; i < n; i++){
        if (arr[i] == target){
            return i;
        }
    }
    return -1;
}

int main(){
    int target;
    int n = 5;
    int arr[] = {1,29,12, 10, 24};
    printf("Enter Number to find:");
    scanf("%d" , &target);
    int index = linearSearch(arr,5,target);
    if (index >= 0){
        printf("Number %d is at index: %d", target, index);
    }
    else{
        printf("Number not found");
    }
    return 0;
}