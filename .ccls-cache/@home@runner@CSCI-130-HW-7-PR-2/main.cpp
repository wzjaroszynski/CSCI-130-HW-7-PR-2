#include <iostream>

using namespace std;

void time(int seconds, int hrs, int min, int sec);

int main() {

  int seconds;
  
cout << "Enter time in seconds:";
cin >> seconds;

  int sec, min, hrs;

  time(int (seconds), int (hrs), int (min), int (sec));

    cout << " The timne"
  
  

}

void time(int seconds, int hrs, int min, int sec){

  int rem1;

  hrs = seconds/3600;
  rem1 = seconds%3600;
  min = rem1/60;
  sec = rem1%60;
  
  }