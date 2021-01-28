#include <iostream>

using namespace std;

int main(){
  double ouncesWeight;
  double metricTon;
  int numBoxes;
  cout << "Please enter the weight of the package in ounces: " << endl;
  cin >> ouncesWeight;
  metricTon = ouncesWeight / 35,273.92;
  numBoxes = ((metricTon * 35,273.92)/ouncesWeight) + 1;

  cout << "Metric tons: " << metricTon << endl;
  cout << "Num of boxes: " << numBoxes << endl;
}
