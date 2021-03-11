#ifndef PERSON_HPP
#define PERSON_HPP

#include <iostream>
#include <string>
#include "height.hpp"
using namespace std;

class Person
{
private:
  string name;
  Height height;

public:
  Person();
  ~Person();

  void setName(string n)
  {
    name = n;
  }
  string getName()
  {
    return name;
  }

  void setFeet(int f)
  {
    height.setFeet(f);
  }
  int getFeet()
  {
    return height.getFeet();
  }

  void setInches(int inch)
  {
    height.setInches(inch);
  }
  int getInches()
  {
    return height.getInches();
  }

  double getCentimeters();
  double getMeters();

};

#endif
