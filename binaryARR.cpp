#include <stdio.h>

int main() {
    int arr[5] = {2,4,6,8,10};
    int low = 0, high = 4, mid, key = 8;

    while (low <= high) {
        mid = (low + high) / 2;

        if (arr[mid] == key) {
            printf("Element found at position %d", mid + 1);
            break;
        }
        else if (arr[mid] < key) {
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
    }

    if (low > high)
        printf("Element not found");

    return 0;
}