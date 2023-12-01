/*<Bigyan Dhakal> <wwj15>
<MSP_2> */

#include <iostream>
#include <iomanip>
using namespace std;

// function declaration and defintion with 5 parameters
void averages(int score1, int score2, int score3, double& average, double& bestAverage){
   average = (score1 + score2 + score3) / 3.0;
   double largest, secondLargest;
   
   if (score1 >= score2 && score1 >= score3){
      largest = score1;
   }
   else if (score2 >= score1 && score2 >= score3){
      largest = score2;
   }
   else{
      largest = score3;
   }
   
   if (score1 == largest){
      if (score2 >= score3){
         secondLargest = score2;
      }
      else {
         secondLargest = score3;
      }
    }
   else if (score2 == largest){
      if (score1 >= score3) {
         secondLargest = score1;
      }
      else {
         secondLargest = score3;
      }
   }
   else {
   if (score1 >= score2){
         secondLargest = score1;
      }
      else{
         secondLargest = score2;
      }
   }
   
   bestAverage = (largest + secondLargest) / 2.0;
   
}


int main() {
   cout << fixed << setprecision(2);   // so the averages output with two digits after the decimal

   /* Type your code here. Your code must call the function.  */
   int score1, score2, score3;
   double average, bestAverage;
   cin >> score1 >> score2 >> score3;
   //calling the function averages
   averages(score1, score2, score3, average, bestAverage);
   cout << average << " " << bestAverage << endl;


   return 0;
}