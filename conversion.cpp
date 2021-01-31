#include <iostream>

using namespace std;
float inputFunction(){
  float inputValueFeet;
  float inputValueInches;
  float totalInches;
  cout<< "Enter the number of feet"<< endl;
  cin >> inputValueFeet;
  cout<< "Enter the number of inches" << endl;
  cin >> inputValueInches;
  totalInches = (inputValueFeet*12)+inputValueInches;
  return totalInches;
}
float inchesToMeters(float inches){
  float meters;
  meters = (inches/12)*.3048;
  return meters;
}
float metersToCentimeters(float meters){
  float centimeters;
  centimeters = meters*100;
  return centimeters;
}
void printFunction(float meters, float centimeters){
  cout<< "Your value is equivalent to " << meters << " meters, or " << centimeters << " centimeters" << endl;
}
int main(){
  string tf = "";
  float inchesValue;
  float metersValue;
  float centimetersValue;
  while (tf!= "exit"){
    cout << "Do you want to convert a value to meters and centimeters? (Type \"exit\" to leave the program" << endl;
    cin >> tf;
    if (tf == "exit"){
      cout << "Thank you for using this program" << endl;
      break;
    }
    else{
      inchesValue = inputFunction();
      metersValue = inchesToMeters(inchesValue);
      centimetersValue = metersToCentimeters(metersValue);
      printFunction(metersValue, centimetersValue);
    }
  }
  return 0;
}
