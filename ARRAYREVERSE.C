#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, i;


    if (scanf("%d", &n) != 1) return 1;
    int* arr = (int*)malloc(n * sizeof(int));
    if (arr == NULL) {
        return 1; 
    }
    
    for (i = 0; i < n; i++) {
        if (scanf("%d", &arr[i]) != 1) {
            free(arr); 
            return 1;
        }
    }

    
    for (i = n - 1; i >= 0; i--) {
        printf("%d", arr[i]);
        if (i > 0) {
            printf(" "); 
        }
    }

    printf("\n");


    free(arr);

    return 0;
}
