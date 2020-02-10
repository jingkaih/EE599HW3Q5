#include "solution.h"

AcademicRecords AcademicRecords::operator++()
{
  maths = maths + 10;
  if(maths < 0)
  maths = 0;
  if (maths > 100)
  maths = 100;

  computers = computers +10;
  if(computers < 0)
  computers = 0;
  if (computers > 100)
  computers = 100;

  physics =physics +10;
  if(physics < 0)
  physics = 0;
  if (physics > 100)
  physics = 100;

  return AcademicRecords(maths, computers, physics);
}

AcademicRecords AcademicRecords::operator++(int)
{
  AcademicRecords prev(maths, computers, physics);
  maths = maths + 10;
  if(maths < 0)
  maths = 0;
  if (maths > 100)
  maths = 100;

  computers = computers + 10;
  if(computers < 0)
  computers = 0;
  if (computers > 100)
  computers = 100;

  physics = physics + 10;
  if(physics < 0)
  physics = 0;
  if (physics > 100)
  physics = 100;

  return prev;
}

AcademicRecords AcademicRecords::operator--()
{
  maths = maths - 20;
  if(maths < 0)
  maths = 0;
  if (maths > 100)
  maths = 100;

  computers = computers -20;
  if(computers < 0)
  computers = 0;
  if (computers > 100)
  computers = 100;

  physics = physics -20;
  if(physics < 0)
  physics = 0;
  if (physics > 100)
  physics = 100;

  return AcademicRecords(maths, computers, physics);
}

AcademicRecords AcademicRecords::operator--(int)
{
  AcademicRecords prev(maths, computers, physics);
  maths = maths - 20;
  if(maths < 0)
  maths = 0;
  if (maths > 100)
  maths = 100;

  computers = computers -20;
  if(computers < 0)
  computers = 0;
  if (computers > 100)
  computers = 100;

  physics = physics -20;
  if(physics < 0)
  physics = 0;
  if (physics > 100)
  physics = 100;
  
  return prev;
}

AcademicRecords AcademicRecords::operator+=(int i)
{
  maths = maths + i;
  if(maths < 0)
  maths = 0;
  if (maths > 100)
  maths = 100;

  computers = computers + i;
  if(computers < 0)
  computers = 0;
  if (computers > 100)
  computers = 100;

  physics = physics + i;
  if(physics < 0)
  physics = 0;
  if (physics > 100)
  physics = 100;

  return AcademicRecords(maths, computers, physics);
}

AcademicRecords AcademicRecords::operator-=(int i)
{
  maths = maths - i;
  if(maths < 0)
  maths = 0;
  if (maths > 100)
  maths = 100;

  computers = computers - i;
  if(computers < 0)
  computers = 0;
  if (computers > 100)
  computers = 100;

  physics = physics - i;
  if(physics < 0)
  physics = 0;
  if (physics > 100)
  physics = 100;

  return AcademicRecords(maths, computers, physics);
}

bool AcademicRecords::operator==(AcademicRecords &r)
{
  if(maths == r.maths && computers == r.computers && physics == r.physics)
  return true;
  else
  return false;
}

std::string AcademicRecords::print()
{
  std::string str = "maths="+std::to_string(maths)+", computers="+std::to_string(computers)+", physics="+std::to_string(physics);
  return str;
}