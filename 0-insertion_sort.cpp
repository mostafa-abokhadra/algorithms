# include <iostream>
using namespace std;

/*
* ======================== how does it work =========================================
 * insertion sort, which is an efficient algorithm for sorting a small number of elements.
 * Insertion sort works the way you might sort a hand of playing cards.
 * Start with an empty left hand and the cards in a pile on the table.
 * Pick up the first card in the pile and hold it with your left hand.
 * Then, with your right hand, remove one card at a time from the pile, and insert it into the correct position in your left hand. 
 * You find the correct position for a card by comparing it with each of the cards already in your left hand, starting at the right and moving left.
 * As soon as you see a card in your left hand whose value is less than or equal to the card you’re holding in your right hand,
 * Insert the card that you’re holding in your right hand just to the right of this card in your left hand.
 * If all the cards in your left hand have values greater than the card in your right hand, then place this card as the leftmost card in your left hand.
 * At all times, the cards held in your left hand are sorted, and these cards were originally the top cards of the pile on the table
 * ========================================================================================
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
