#include <stdio.h>

void take_element_in_index_and_put_front(int index, int arr[], int size) {
         int current = arr[index];
         for (int i = index - 1; i >= 0; i--) {
                 arr[i + 1] = arr[i];
               for (int i = 0; i < size; i ++){
                         printf("%d ", arr[i]);
                }
                printf("\n");
        }

        arr[0] = current;
}
int main() {
        int arr [9] = {1, 2, 4, 5, 6, 7, 8, 9};
        int size = sizeof(arr) / sizeof(arr[0]);

        take_element_in_index_and_put_front(4, arr, size);
        for(int i =0; i < size; i++){
                printf("%d ", arr[i]);
        }
        printf("\n");
        return 0;
}   
