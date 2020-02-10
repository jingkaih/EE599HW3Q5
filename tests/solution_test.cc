#include "src/lib/solution.h"
#include "gtest/gtest.h"
#include <vector>

TEST(MathsShouldNever, GoAbove100) {
  AcademicRecords mike(92,96,95);
  mike++;
  int expected_maths = 100;
  int actual_maths = mike.maths;
  EXPECT_EQ(expected_maths, actual_maths);
}

TEST(ComputersShouldNever, GoAbove100) {
  AcademicRecords mike(92,96,95);
  mike++;
  int expected_computers = 100;
  int actual_computers = mike.computers;
  EXPECT_EQ(expected_computers, actual_computers);
}

TEST(PhysicsShouldNever, GoAbove100) {
  AcademicRecords mike(92,96,95);
  mike++;
  int expected_physics = 100;
  int actual_physics = mike.physics;
  EXPECT_EQ(expected_physics, actual_physics);
}

TEST(MathsShouldNever, GoBelow0) {
  AcademicRecords mike(15,12,3);
  mike--;
  int expected_maths = 0;
  int actual_maths = mike.maths;
  EXPECT_EQ(expected_maths, actual_maths);
}

TEST(ComputersShouldNever, GoBelow0) {
  AcademicRecords mike(15,12,3);
  mike--;
  int expected_Computers = 0;
  int actual_Computers = mike.computers;
  EXPECT_EQ(expected_Computers, actual_Computers);
}

TEST(PhysicsShouldNever, GoBelow0) {
  AcademicRecords mike(15,12,3);
  mike--;
  int expected_physics = 0;
  int actual_physics = mike.physics;
  EXPECT_EQ(expected_physics, actual_physics);
}

TEST(OperatorPlusPlus, ShouldWork) {
  AcademicRecords mike(15,12,95);
  mike++;
  std::string expected = "maths=25, computers=22, physics=100";
  std::string actual = mike.print();
  EXPECT_EQ(expected, actual);
}

TEST(OperatorMinusMinus, ShouldWork) {
  AcademicRecords mike(15,12,95);
  mike--;
  std::string expected = "maths=0, computers=0, physics=75";
  std::string actual = mike.print();
  EXPECT_EQ(expected, actual);
}

TEST(OperatorPlusEqual, ShouldWork) {
  AcademicRecords mike(15,12,95);
  mike+=8;
  std::string expected = "maths=23, computers=20, physics=100";
  std::string actual = mike.print();
  EXPECT_EQ(expected, actual);
}

TEST(OperatorMinusEqual, ShouldWork) {
  AcademicRecords mike(15,12,95);
  mike-=14;
  std::string expected = "maths=1, computers=0, physics=81";
  std::string actual = mike.print();
  EXPECT_EQ(expected, actual);
}

TEST(OperatorEqualEqual, ShouldWork) {
  AcademicRecords mike(15,12,95);
  AcademicRecords jack = mike;
  bool actual = (jack == mike);
  bool expected = true;
  EXPECT_EQ(expected, actual);
}