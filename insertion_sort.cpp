# include <iostream>
using namespace std;

/*
 *
 */
void insertionSort(int array[], int size){
    
    int current, j;
    for (int i = 1; i < size; i++){
        current = array[i];  // Store the current element
        j = i - 1;          // Start comparing with the previous element

        // Shift elements greater than 'current' to the right
        while (current < array[j] && j >= 0) { // if you want to sort from bigger to smaller, you would only have to replace '<' with '>' in "current < array[j]"
            array[j + 1] = array[j]; // shifting the greater element to the right
            --j;
        }
        array[j + 1] = current; // Insert 'current' in its correct position
    
        for (int i = 0; i < size; i++) {
            printf("%d ", array[i]);
        }
        printf("\n");
    }
}

int main(){
        int array[8] = {55, 4, 33, -1, 0, 3, 5, 2};
        insertionSort(array, 8);
        /*
         * expected output
         * 4 55 33 -1 0 3 5 2
         * 4 33 55 -1 0 3 5 2
         * -1 4 33 55 0 3 5 2
         * -1 0 4 33 55 3 5 2
         * -1 0 3 4 33 55 5 2
         * -1 0 3 4 5 33 55 2
         * -1 0 2 3 4 5 33 55
         */
        return 0;
}
