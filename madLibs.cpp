#include <iostream>
#include <string>

using namespace std;

int main()
{
	string dogName;
  string dogAte;
  string dogVisit;
  string dogFell;
  cout << "The dog's name is  ____ " << endl;
  cin >> dogName;
  cout <<"One day, the dog ate a ____" << endl;
  cin << dogAte;
  cout << "After, he visited the ____" << endl;
  cin << dogVisit;
  cout << "and fell off of a ____" << endl;
  cin << dogFell;
  cout << "The dog's name is " << dogVisit << ". One day, the dog ate a " << dogFell << ". After, he visited the " << dogName << ", and fell off of a " << dogAte << "." << endl;
  
}
