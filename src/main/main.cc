#include <iostream>
#include "src/lib/solution.h"

int main()
{
    AcademicRecords mike(90,60,70);
    AcademicRecords jack = mike;
    bool b = (jack == mike);
    std::cout << b <<std::endl;
    //jack++;
    std::cout << mike.maths << mike.computers << mike.physics <<std::endl;
    std::cout << (++jack).maths << jack.computers << jack.physics <<std::endl;

    AcademicRecords luke(10,30,15);
    
    std::cout << (luke--).maths << luke.computers << luke.physics <<std::endl;
    AcademicRecords sam(90,30,15);
    sam += 15;
    std::cout << sam.maths << sam.computers << sam.physics <<std::endl;
    std::cout << sam.print()<<std::endl;
    return EXIT_SUCCESS;
}