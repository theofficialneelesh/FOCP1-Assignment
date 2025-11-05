#include <stdio.h>

int main() {
    int arr[100], n, place, num, i;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d numbers: ", n);
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter place to insert (1 to %d): ", n + 1);
    scanf("%d", &place);
    printf("Enter number to insert: ");
    scanf("%d", &num);

    for(i = n; i >= place; i--)
        arr[i] = arr[i - 1];

    arr[pos - 1] = num;
    n++;

    printf("Array after insertion: ");
    for(i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}
