#include <stdio.h>

void swap(int *a, int *b) {
    int t = *a;
    *a = *b;
    *b = t;
}

void dutch_national_flag_sort(int arr[], int n) {
    int low = 0, mid = 0, high = n - 1;
    while (mid <= high) {
        if (arr[mid] == 0) {
            swap(&arr[low], &arr[mid]);
            low++;
            mid++;
        } else if (arr[mid] == 1) {
            mid++;
        } else {
            swap(&arr[mid], &arr[high]);
            high--;
        }
    }
}

int main() {
    int n;
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("invalid input for n\n");
        return 1;
    }
int arr[n];
for (int i = 0; i < n; i++) {
    if (scanf("%d", &arr[i]) != 1) {
        printf("invalid array input\n");
        return 1;
    }
}

dutch_national_flag_sort(arr, n);

for (int i = 0; i < n; i++) {
    if (i) printf(" ");
    printf("%d", arr[i]);
}
printf("\n");

return 0;
}