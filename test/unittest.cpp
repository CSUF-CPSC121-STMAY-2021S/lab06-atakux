#include <gtest/gtest.h>
#include <gmock/gmock.h>
#include "../person.hpp"
#include "../height.hpp"
#include "gtest_ext.h"

using ::testing::HasSubstr;

TEST(Person, Constructor) {
  Person myPerson;
  ASSERT_EQ(myPerson.getName(), "CSUF")
      << "### ERROR calling constructor, the default name should be CSUF ###";
  ASSERT_EQ(myPerson.getFeet(), 22)
      << "### ERROR calling constructor, the default feet should be 22 ###";
}

TEST(Person, Destructor) {
  SIMULATE_SIO("", {
      Person myPerson;
    }, {
      ASSERT_THAT(your_output, HasSubstr("<DEBUG:Person destructor called>\n")) << "### ERROR calling destructor ###";
    })
}

TEST(Person, PublicFunctionsPresent) {
  Person myPerson;
  myPerson.setName("test");
  myPerson.setFeet(2);
  myPerson.setInches(2);
  myPerson.getName();
  myPerson.getFeet();
  myPerson.getInches();
  myPerson.getCentimeters();
  myPerson.getMeters();
}

TEST(Person, NameSetterGetter) {
  Person myPerson;
  myPerson.setName("HELLO WORLD");
  ASSERT_EQ(myPerson.getName(), "HELLO WORLD")
      << "### ERROR calling getName, the test value HELLO WORLD was not returned ###";
}

TEST(Person, FeetSetterGetter) {
  Person myPerson;
  myPerson.setFeet(55);
  ASSERT_EQ(myPerson.getFeet(), 55)
      << "### ERROR calling getFeet, the test value 55 was not returned ###";
}

TEST(Person, CentimeterReturn) {
  Person myPerson;
  myPerson.setFeet(6);
  myPerson.setInches(1);
  ASSERT_EQ(static_cast<int>(myPerson.getCentimeters()), 185)
      << "### ERROR calling getCentimeters where feet was set to 6 and inches was set to 1, the test value 185 was not returned ###";
}

TEST(Height, Constructor) {
  Height myHeight;
  ASSERT_EQ(myHeight.getFeet(), 22)
      << "### ERROR calling constructor, the default feet should be 22 ###";
}

TEST(Height, Destructor) {
  SIMULATE_SIO("", {
      Height myHeight;
    }, {
      ASSERT_THAT(your_output, HasSubstr("<DEBUG:Height destructor called>\n")) << "### ERROR calling destructor ###";
    })
}


TEST(Main, noInput) {
  std::string prog_name = "main";
  std::string input     = "xxx\n";
  std::string output    = "*** TUFFY TITAN HEIGHT CALCULATOR ***\n\nEnter first name (type xxx when finished): \nName                 Feet Inches Centimeters Meters\n==================== ==== ====== =========== ======\n<DEBUG:Person destructor called>\n<DEBUG:Height destructor called>\n<DEBUG:Person destructor called>\n<DEBUG:Height destructor called>\n<DEBUG:Person destructor called>\n<DEBUG:Height destructor called>\n<DEBUG:Person destructor called>\n<DEBUG:Height destructor called>\n<DEBUG:Person destructor called>\n<DEBUG:Height destructor called>\n";
  ASSERT_EXECEQ(prog_name, input, output)
      << "### ERROR executing main program with no input ###";
}

TEST(Main, validInput) {
  std::string prog_name = "main";
  std::string input     = "Tuffy Titan\n7\n6\nBuzz Lightyear\n0\n11\nDonald Duck\n3\n0\nxxx\n";
  std::string output    = "*** TUFFY TITAN HEIGHT CALCULATOR ***\n\nEnter first name (type xxx when finished): \nEnter feet: \nEnter inches: \nEnter first name (type xxx when finished): \nEnter feet: \nEnter inches: \nEnter first name (type xxx when finished): \nEnter feet: \nEnter inches: \nEnter first name (type xxx when finished): \nName                 Feet Inches Centimeters Meters\n==================== ==== ====== =========== ======\nTuffy Titan             7      6       228.6  2.286\nBuzz Lightyear          0     11        27.9  0.279\nDonald Duck             3      0        91.4  0.914\n<DEBUG:Person destructor called>\n<DEBUG:Height destructor called>\n<DEBUG:Person destructor called>\n<DEBUG:Height destructor called>\n<DEBUG:Person destructor called>\n<DEBUG:Height destructor called>\n<DEBUG:Person destructor called>\n<DEBUG:Height destructor called>\n<DEBUG:Person destructor called>\n<DEBUG:Height destructor called>\n";
  ASSERT_EXECEQ(prog_name, input, output)
      << "### ERROR executing main program with valid input ###";
}

int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    ::testing::UnitTest::GetInstance()->listeners().Append(new SkipListener());
    return RUN_ALL_TESTS();
}
