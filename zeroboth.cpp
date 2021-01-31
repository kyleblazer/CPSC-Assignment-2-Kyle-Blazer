#include <iostream>

using namespace std;

void zeroBoth (int& a, int& b){
  a = 0;
  b= 0;
}
int main(){
  int param1;
  int param2;
  cout << "Enter one int to be made zero." << endl;
  cin >> param1;
  cout << "Enter another int to be made zero." << endl;
  cin >> param2;
  zeroBoth(param1,param2);
  cout << "Int 1's value: " << param1 << endl;
  cout << "Int 2's value: " << param2 << endl;
  return 0;
}
