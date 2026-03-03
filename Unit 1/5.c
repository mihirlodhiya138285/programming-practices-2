// Copy the elements of one array into another.
#include <stdio.h>

int main() {
    int n, i;

    // Step 1: Ask user for number of elements
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr1[n], arr2[n];  // two arrays of size n

    // Step 2: Input elements in arr1
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr1[i]);
    }

    // Step 3: Copy elements from arr1 to arr2
    for(i = 0; i < n; i++) {
        arr2[i] = arr1[i];
    }

    // Step 4: Print arr2 to confirm copy
    printf("Elements copied into second array:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", arr2[i]);
    }

    return 0;
}
