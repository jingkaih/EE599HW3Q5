#ifndef TEMPLATE_SOLUTION_H
#define TEMPLATE_SOLUTION_H

#include <string>
#include <vector>

class AcademicRecords {
public:
  
  int maths, computers, physics;

  //default constructor
  AcademicRecords(): maths(0), computers(0), physics(0){}

  //parameterized constructor
  AcademicRecords(int m, int c, int p): maths(m), computers(c), physics(p){}

  //copy constructor
  AcademicRecords(const AcademicRecords &AR): maths(AR.maths), computers(AR.computers), physics(AR.physics){}

  //operator prefix ++ overloading
  AcademicRecords operator ++ ();
  //operator postfix ++ overloading
  AcademicRecords operator ++ (int);
  //operator prefix -- overloading
  AcademicRecords operator -- ();
  //operator postfix -- overloading
  AcademicRecords operator -- (int);
  //operator += overloading
  AcademicRecords operator += (int);
  //operator -= overloading
  AcademicRecords operator -= (int);
  //operator == overloading
  bool operator == (AcademicRecords &);

  //print()
  std::string print();
};

#endif