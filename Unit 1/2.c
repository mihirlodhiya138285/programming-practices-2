// Enter N elements and find total and average of them.
#include <stdio.h>

int main() {
    int n, i;
    int sum = 0;       // to store total
    float average;     // to store average

    // Step 1: Ask user for number of elements
    printf("Enter number of elements: ");
    scanf("%d", &n);

    // Step 2: Declare array
    int arr[n];

    // Step 3: Input elements
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];   // add each element to sum
    }

    // Step 4: Calculate average
    average = (float)sum / n;

    // Step 5: Print results
    printf("Total = %d\n", sum);
    printf("Average = %.2f\n", average);

    return 0;
}
