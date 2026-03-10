#include <stdio.h>
#define SIZE 10

int hashTable[SIZE];

// Insert using Linear Probing
void insert(int key) {
    int index = key % SIZE;

    while (hashTable[index] != -1) {
        index = (index + 1) % SIZE;
    }
    hashTable[index] = key;
}

// Display input list
void displayList(int arr[], int n) {
    printf("\nElements in the list:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

// Display hash table and highlight searched key
void displayTable(int searchKey) {
    printf("\nHash Table:\n");
    for (int i = 0; i < SIZE; i++) {
        if (hashTable[i] == -1)
            printf("Index %d : Empty\n", i);
        else if (hashTable[i] == searchKey)
            printf("Index %d : %d  <-- searched key\n", i, hashTable[i]);
        else
            printf("Index %d : %d\n", i, hashTable[i]);
    }
}

int main() {
    int n, key, searchKey;
    int arr[20];

    // Initialize hash table
    for (int i = 0; i < SIZE; i++)
        hashTable[i] = -1;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        insert(arr[i]);
    }

    // Step 1: Display list
    displayList(arr, n);

    // Step 2: Ask for search key
    printf("\nWhich element do you want to search: ");
    scanf("%d", &searchKey);

    // Step 3: Display hash table
    displayTable(searchKey);

    return 0;
}