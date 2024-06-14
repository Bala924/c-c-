#include<iostream>
using namespace std;
int reverseNumber(int num) {
   int res = 0;
   while(num != 0) {
      res = res * 10 + num % 10; //cut last digit and add into the result
      num /= 10; //reduce the number
   }
   return res;
}
bool checkAdamNumber(int num) {
   int rev_num = reverseNumber(num);
   //get the square of the number and the reverse number
   int sq_num = num * num;
   int sq_rev_num = rev_num * rev_num;
   //if the sq_num and sq_rev_num are reverse of each other, then they are Adam Number.
   if(sq_num == reverseNumber(sq_rev_num)) {
      return true;
   }
   return false;
}
main() {
   int num;
   cout << "Enter a number to check whether it is Adam number or not:";
   cin << num;
   if(checkAdamNumber(num)) {
      cout << "The number is an Adam number";
   } else {
      cout << "The number is not an Adam number";
   }
}

