/*.Enter N elements and find how many are positive, negative, even
and odd.*/
#include <stdio.h>

int main() {
    int n, i;
    int positive = 0, negative = 0, even = 0, odd = 0;

    // Step 1: Ask user for number of elements
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];  // array of size n

    // Step 2: Input elements
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);

        // Step 3: Check positive/negative
        if(arr[i] >= 0) {
            positive++;
        } else {
            negative++;
        }

        // Step 4: Check even/odd
        if(arr[i] % 2 == 0) {
            even++;
        } else {
            odd++;
        }
    }

    // Step 5: Print results
    printf("Positive numbers = %d\n", positive);
    printf("Negative numbers = %d\n", negative);
    printf("Even numbers = %d\n", even);
    printf("Odd numbers = %d\n", odd);

    return 0;
}
\
