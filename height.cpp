#include "height.hpp"
#include <iostream>

using namespace std;
Height::Height()
{
  feet = 22;
  inches = 22;
}

Height::~Height()
{
  cout << "<DEBUG:Height destructor called>" << endl;
}

double Height::getCentimeters()
{
  return ((feet * 12.0) + inches) * 2.54;
}

double Height::getMeters()
{
  return (((feet * 12.0) + inches) * 2.54) / 100.0;
}
