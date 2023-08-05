#include<stdio.h>

int binarySearch(int arr[], int n, int target){
    int low = 0;
    int high = n-1;
    while (low <= high){
        int mid = (low + high)/2;
        if (arr[mid] == target){
            return mid;
        }
        else if (arr[mid] < target){
            low = mid + 1;   
        }
        else{
            high = mid - 1;
        }
    }
    return -1;
}

int main(){
    int target;
    int n = 5;
    int arr[] = {1, 12, 14, 20, 29};
    printf("Enter Number to find:");
    scanf("%d" , &target);
    int index = binarySearch(arr,5,target);
    if (index >= 0){
        printf("Number %d is at index: %d", target, index);
    }
    else{
        printf("Number not found");
    }
    return 0;
}