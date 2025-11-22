#include <stdio.h>
void binarySearch(int LS[], int size, int search);14
void binarySearch(int LS[], int size, int search) {
    int lwbound = 0;         
    int upbound = size - 1;   
    int mid;
    while (lwbound <= upbound) {
        mid = lwbound + (upbound - lwbound) / 2; 
        if (LS[mid] == search) {
            printf("Element %d found at index %d\n", search, mid);
            return;  
        }
        else if (LS[mid] <search) {
            lwbound = mid + 1;
        }
        else {  
            upbound = mid - 1;  
        }
    }
    printf("Element %d not found in the array\n", search);
}
int main() {
    int arr[] = {2, 4, 6, 8, 10, 12, 14, 16};
    int size = sizeof(arr) / sizeof(arr[0]);
    int search;

    printf("Enter the number to search: ");
    scanf("%d", &search);
    binarySearch(arr, size,search);
    return 0;
}