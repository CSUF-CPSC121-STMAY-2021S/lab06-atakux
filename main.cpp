//Name: Angela DeLeo
//Date: 03.10.2021
//Exercise: Lab06 Solution

#include <iostream>
#include <iomanip>
#include <string>
#include "person.hpp"

using namespace std;

int main()
{
const int MAX = 5;
Person person[MAX];
string pName;
int heightFeet, heightInches;
int count = 0;

 cout << "*** TUFFY TITAN HEIGHT CALCULATOR ***" << endl << endl;

 do {
   cout << "Enter first name (type xxx when finished): ";
   getline(cin, pName);
   person[count].setName(pName);
   cout << endl;

   if(person[count].getName() == "xxx")
     break;

   else
   {
     cout << "Enter feet: ";
     cin >> heightFeet;
     person[count].setFeet(heightFeet);
     cout << endl;

     cout << "Enter inches: ";
     cin >> heightInches;
     person[count].setInches(heightInches);
     cout << endl;

     cin.ignore();
   }

   count++;

 } while(person[count].getName() != "xxx" || count == MAX);

cout << "Name                 Feet Inches Centimeters Meters" << endl;
cout << "==================== ==== ====== =========== ======" << endl;



for(count = 0; count < MAX; count++)
{
  if(person[count].getName() == "xxx")
   break;

 else
 {
   cout << left << setw(20) << person[count].getName()
       << right << setw(5) << person[count].getFeet()
       << right << setw(7) << person[count].getInches()
       << right << setw(12) << fixed << setprecision(1) << person[count].getCentimeters()
       << right << setw(7) << fixed << setprecision(3) << person[count].getMeters()
       << setw(20) << setfill(' ') << endl;
 }

}

return 0;
}
