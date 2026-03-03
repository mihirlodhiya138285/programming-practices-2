//Enter N elements and print them. 
#include <stdio.h>

int main() {
    int n, i;

    // Step 1: Ask user for number of elements
    printf("Enter number of elements: ");
    scanf("%d", &n);

    // Step 2: Declare an array of size n
    int arr[n];   // This is called a variable-length array (VLA)

    // Step 3: Input elements
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Step 4: Print elements
    printf("You entered:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
