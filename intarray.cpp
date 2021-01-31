#include <iostream>
#include <vector>
using namespace std;

int main()
{
  vector<int> numList = {};
  char YN;
  int intToAdd;
  int vectorSize =0;
  bool TF = true;
  while (TF == true){
    cout << "Do you want to add an integer to the array list? (Y or N) " << endl;
    cin >> YN ;
    if (vectorSize > 9){
      TF = false;
      cout<< "Your list has reached the max size of 10 integers." << endl;
      break;
    }
    if (YN == 'Y'){
      cout << "Enter an integer" << endl;
      cin >> intToAdd;
      numList.push_back(intToAdd);
      vectorSize += 1;
    }
    else{
      TF = false;
      break;
    }
  }
  cout << "Your list of numbers is: ";
  for (int x : numList){
    cout << x << " ";
  }
  cout<< endl;
    return 0;
}
