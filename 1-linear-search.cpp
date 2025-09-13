# include <iostream>
using namespace std;

int linearSearch (int arr[], int size, int target) {
    for (int i = 0; i < size; i++){
        if (arr[i] == target){
            printf("%d ", i);
            return i;
        }
    }
    return 0;
}
int main() {

    int array[5] = {55, 3, 74, 23, 12};
    int target = 23;
    int result = linearSearch(array, 5, target);
    printf("%d\n", result); 

    printf(result ? "element found in index %d\n": "element not found\n", result);
    return 0;
}
