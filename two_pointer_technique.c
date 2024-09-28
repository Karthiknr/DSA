/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

void findPair(int arr[], int n, int target) {
    int left = 0;
    int right = n - 1;

    while (left < right) {
        int current_sum = arr[left] + arr[right];

        if (current_sum == target) {
            printf("Pair found: %d and %d\n", arr[left], arr[right]);
            left++;
            //return;
        } else if (current_sum < target) {
            left++;  // Move left pointer to increase the sum
        } else {
            right--;  // Move right pointer to decrease the sum
        }
    }

    printf("No pair found.\n");
}

int main() {
    int arr[] = {2, 3, 5, 8, 11, 15, 18};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 20;

    findPair(arr, n, target);

    return 0;
}
