#include <stdio.h>

int main() {
    int arr[100], n, i, count = 0;

    printf("Enter number of students: ");
    scanf("%d", &n);

    printf("Enter %d marks: ", n);
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Students who scored 99 are at positions: ");
    for(i = 0; i < n; i++) {
        if(arr[i] == 99) {
            printf("%d ", i + 1);
            count++;
        }
    }

    if(count == 0)
        printf("\n none of the student has scored 99.\n");
    else
        printf("\n Total students who scored 99 = %d\n", count);

    return 0;
}
