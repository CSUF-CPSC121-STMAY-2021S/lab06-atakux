#include "person.hpp"
#include "height.hpp"
#include <iostream>

using namespace std;
Person::Person()
{
  name = "CSUF";

}

Person::~Person()
{
  cout << "<DEBUG:Person destructor called>" << endl;
}

double Person::getCentimeters()
{
  return ((height.getFeet() * 12.0) + height.getInches()) * 2.54;
}

double Person::getMeters()
{
  return (((height.getFeet() * 12.0) + height.getInches()) * 2.54) / 100.0;
}
