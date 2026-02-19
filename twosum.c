#include <stdio.h>

int main() {
    int n, target;
    
    // Read size of array
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    
    int arr[n];
    
    // Read array elements
    printf("Enter %d elements: ", n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    // Read target sum
    printf("Enter target value: ");
    scanf("%d", &target);
    
    // Find two numbers that add up to target
    int found = 0;
    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {
            if(arr[i] + arr[j] == target) {
                printf("Indices: %d and %d\n", i, j);
                printf("Values: %d + %d = %d\n", arr[i], arr[j], target);
                found = 1;
                break;
            }
        }
        if(found) break;
    }
    
    if(!found) {
        printf("No two elements sum up to %d\n", target);
    }

    // Pause before exiting (for Windows console)
    printf("Press Enter to exit...");
    getchar(); // consumes leftover newline
    getchar(); // waits for Enter

    return 0;
}
