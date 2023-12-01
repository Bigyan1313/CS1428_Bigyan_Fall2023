/* <Bigyan Dhakal><wwj15>
<MSP1> */
#include <iostream>
using namespace std;

int main() {

      /* Type your code here. */
      double loan_amount, payment_amount, intrest_rate;
      
      //read input values
      cin >> loan_amount >> payment_amount >> intrest_rate;
      
      double current_balance = loan_amount;
      int num_payments = 0;
      
      //calculate the number of payment required
      while (current_balance > 0){
      current_balance += current_balance * intrest_rate;
      current_balance -= payment_amount;
      num_payments++;
      }
      cout << num_payments << (num_payments == 1 ? " payment" : " payments") << endl;
   return 0;
}