/*Bigyan Dhakal>(<wwj15>)
Date: 11/22/2023
*/

#include <iostream>
using namespace std;

/* Define your function here */

/* 
   Function: GetPhoneNumber
   Description: Searches for a contact name in the nameArr array and returns the associated 
                phone number from the phoneNumberArr array.
   Parameters:
       - nameArr[]: Array containing contact names.
       - phoneNumberArr[]: Array containing phone numbers corresponding to the contact names.
       - size: Size of the arrays.
       - contactName: Name to be searched in the nameArr array.
   Returns:
       - If found, returns the corresponding phone number.
       - If not found, returns an empty string.
*/
string GetPhoneNumber(string nameArr[], string phoneNumberArr[], int size, string contactName) {
  for (int i = 0; i < size; i++) {
    if (nameArr[i] == contactName) {
      return phoneNumberArr[i];
    }
  }
  return ""; // Return an empty string if the contact name is not found.
}

/*
   Function: main
   Description: Reads contact names and phone numbers, then searches for a specific contact name's 
                phone number using GetPhoneNumber function.
*/
int main() {
   /* Type your code here */
  int N;
  cin >> N;

  string nameArr[N];
  string phoneNumberArr[N];
  
  for (int i = 0; i < N; i++) {
    cin >> nameArr[i];
    cin >> phoneNumberArr[i];
  }

  string contactName;
  cin >> contactName;

  string phoneNumber = GetPhoneNumber(nameArr, phoneNumberArr, N, contactName);
    if (phoneNumber == "") {
        cout << "No such contact" << endl;
    } 
    else {
        cout << phoneNumber<<endl;
        if (contactName == "Bigyan") {
              cout << "* MY NAME *" << endl;
         }
    }
    
   return 0;
}