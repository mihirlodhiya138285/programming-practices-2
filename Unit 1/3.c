//. Enter N elements and find maximum and minimum value.
#include <stdio.h>

int main() {
    int n, i;
    int max, min;

    // Step 1: Ask user for number of elements
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];  // array of size n

    // Step 2: Input elements
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Step 3: Assume first element is both max and min
    max = arr[0];
    min = arr[0];

    // Step 4: Compare each element
    for(i = 1; i < n; i++) {
        if(arr[i] > max) {
            max = arr[i];
        }
        if(arr[i] < min) {
            min = arr[i];
        }
    }

    // Step 5: Print results
    printf("Maximum value = %d\n", max);
    printf("Minimum value = %d\n", min);

    return 0;
}
