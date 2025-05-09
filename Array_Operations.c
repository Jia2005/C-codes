#include <stdio.h>

void search(int *, int);
void sort(int *, int);
void insert(int *, int *);
void delet(int *, int *);

int main() {
    int a[20], i, n, choice;

    printf("\nEnter the number of elements in the array: ");
    scanf("%d", &n);

    printf("Enter the array elements:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    printf("The array elements are:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }

    printf("\n\nMenu:");
    printf("\n1. Search");
    printf("\n2. Sort");
    printf("\n3. Insert");
    printf("\n4. Delete");
    printf("\nEnter your choice: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            search(a, n);
            break;
        case 2:
            sort(a, n);
            break;
        case 3:
            insert(a, &n);
            break;
        case 4:
            delet(a, &n);
            break;
        default:
            printf("\nInvalid input.\n");
            break;
    }

    return 0;
}

void search(int *a, int n) {
    int i, x;
    printf("\nEnter the element to be searched: ");
    scanf("%d", &x);
    for (i = 0; i < n; i++) {
        if (a[i] == x) {
            printf("The element is found at position %d\n", i + 1);
            return;
        }
    }
    printf("The number is not found.\n");
}

void sort(int *a, int n) {
    int i, j, temp;
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (a[j] > a[j + 1]) {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
    printf("The sorted array is:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
}

void insert(int *a, int *n) {
    int i, pos, num;
    printf("\nEnter the position to insert the element: ");
    scanf("%d", &pos);
    if (pos > *n + 1 || pos < 1) {
        printf("Invalid position.\n");
        return;
    }
    printf("Enter the element to be inserted: ");
    scanf("%d", &num);
    for (i = *n; i >= pos; i--) {
        a[i] = a[i - 1];
    }
    a[pos - 1] = num;
    (*n)++;
    printf("Array after insertion:\n");
    for (i = 0; i < *n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
}

void delet(int *a, int *n) {
    int i, pos;
    printf("\nEnter the position of the element to delete: ");
    scanf("%d", &pos);
    if (pos > *n || pos < 1) {
        printf("Invalid position.\n");
        return;
    }
    for (i = pos - 1; i < *n - 1; i++) {
        a[i] = a[i + 1];
    }
    (*n)--;
    printf("Array after deletion:\n");
    for (i = 0; i < *n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
}
