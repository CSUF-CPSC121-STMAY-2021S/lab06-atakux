#ifndef HEIGHT_HPP
#define HEIGHT_HPP

#include <iostream>
#include <string>
using namespace std;

class Height
{
private:
  int feet, inches;

public:
  Height();
  ~Height();

  void setFeet(int f)
  {
    feet = f;
  }
  int getFeet()
  {
    return feet;
  }

  void setInches(int inch)
  {
    inches = inch;
  }
  int getInches()
  {
    return inches;
  }

  double getCentimeters();
  double getMeters();

};

#endif
