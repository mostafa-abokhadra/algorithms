 #include <iostream>
   using namespace std;
   bool isPrime(int num) {
           if (num >= 0 && num <= 2)
                 return false;
         for (int i = 2; i < num; i++) {
                   if (num % i == 0)
                           return true;
           }
          return false;
  }
  int main() {
          int num = 5;
          cout<< isPrime(num) << endl;
          return 0;
 }
