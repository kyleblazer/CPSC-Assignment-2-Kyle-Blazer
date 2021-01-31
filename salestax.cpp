#include <iostream>

using namespace std;
float addTax(float cost, float taxRate){
  float finalCost;
  float taxAddition;
  taxAddition = (taxRate/100.0)+1.0;
  finalCost = cost*taxAddition;
  return finalCost;
}
int main(){
  float cost;
  float taxRate;
  float finalValue;
  cout<< "Enter the cost of the item in dollars: " << endl;
  cin >> cost;
  cout<< "Enter the tax rate as a percent: " << endl;
  cin >> taxRate;
  finalValue = addTax(cost,taxRate);
  cout<< "Final cost: $" << finalValue<< endl;
  return 0;
}
