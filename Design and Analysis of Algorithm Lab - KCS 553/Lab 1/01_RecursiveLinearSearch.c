#include <stdio.h>
int recursiveSearch(int array[], int size, int target) {
    if (size == 0) {
        return -1;
    }
    if (array[0] == target) {
        return 0;
    }
    int subResult = recursiveSearch(array + 1, size - 1, target);
    
    if (subResult != -1) {
        return subResult + 1;
    }
    return -1;
}

int main() {
    int arraySize;
    printf("enter the no of elements: ");
    scanf("%d", &arraySize);
    
    int array[arraySize];
    printf("Enter %d integer(s)\n", arraySize);
    for (int i = 0; i < arraySize; i++) {
        scanf("%d", &array[i]);
    }
    
    int searchTarget;
    printf("enter the item to be search: ");
    scanf("%d", &searchTarget);
    
    int searchResult = recursiveSearch(array, arraySize, searchTarget);
    
    if (searchResult == -1) {
        printf("no item found\n");
    } else {
        printf("item location = %d item = %d\n", searchResult + 1, array[searchResult]);
    }
    return 0;
}
