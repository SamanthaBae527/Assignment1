#include <iostream>

using namespace std;

int main(){
  int hours;

  cout << "Please enter the amount of hours worked this week: " << endl;
  cin >> hours;
  double grossPay;
  double socialSecurityTax;
  double federalIncomeTax;
  double stateIncomeTax;
  double medicalInsurance = 10.0;
  double hourlyPay = 16.0;
  double overtimePay = 16.0 * 1.5;

  if(hours > 40){
    double overtime = (hours - 40) * overtimePay;
    double notOverTime = 40 * hourlyPay;
    grossPay = overtime + notOverTime;
  }
  else{
    double notOverTime = hours * hourlyPay;
    grossPay = notOverTime;
  }

  cout << "Your gross pay is: " << grossPay << endl;
  socialSecurityTax = grossPay * 0.06;
  federalIncomeTax = grossPay * 0.14;
  stateIncomeTax = grossPay * 0.05;
  cout << "Here are your withholding amounts: " << endl;
  cout << "Social Security Tax: $" << socialSecurityTax << endl;
  cout << "Federal Income Tax: $" << federalIncomeTax << endl;
  cout << "State Income Tax: $" << stateIncomeTax << endl;
  cout << "Medical Insurance: $" << medicalInsurance << endl;

  double netPay = grossPay - socialSecurityTax - federalIncomeTax - stateIncomeTax - medicalInsurance;
  cout << "Your net take home pay is: $" << netPay << endl;
}
