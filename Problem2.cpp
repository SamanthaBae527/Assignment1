#include <iostream>

using namespace std;

int main(){
  int maxCap;
  int numAttending;

  cout << "Please enter the maximum room capacity: " << endl;
  cin >> maxCap;
  cout << "Please enter the number of people attending: " << endl;
  cin >> numAttending;

  if (numAttending <= maxCap){
    cout << "It is legal to attend the meeting!" << endl;
    int theRest = maxCap - numAttending;
    cout << "You may add " << theRest << " more people." << endl;
  }
  else{
    cout << "The meeting cannot be held due to fire regulations!" << endl;
    int theRest = numAttending - maxCap;
    cout << "You must exclude " << theRest << " people." << endl;
  }
}
