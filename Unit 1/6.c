// Enter N elements and arrange them in reverse order.
#include <stdio.h>

int main() {
    int n, i;

    // Step 1: Ask user for number of elements
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];  // array of size n

    // Step 2: Input elements
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Step 3: Print elements in reverse order
    printf("Elements in reverse order:\n");
    for(i = n - 1; i >= 0; i--) {
        printf("%d ", arr[i]);
    }

    return 0;
}

