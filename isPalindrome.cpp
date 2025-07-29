#include <iostream>
#include <string>

using namespace std;

// first method
int isPalindrome(int num) {
        string reversed = "";
        int temp = num;
        if (num == 0)
                return true;
        if (num < 0)
                return false;
        while (num > 0) {
                reversed = reversed + to_string(num % 10);
                num /= 10;
        }
        if (temp == stol(reversed))
                return 1;
        return 0;
}
int main() {
        cout << isPalindrome(1234567899) << endl;
        return 0;
}
