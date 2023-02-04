#ifndef __CALCULATE__
#define __CALCULATE__

#include <vector>
#include "BienLai.h"


class Cal
{
protected:
    std::vector<BienLai>mList;
public:
    void add();
    void remove();
    void calculate();
    void print();
    void edit();

    Cal();
    Cal(std::vector<BienLai> bienlai);
    ~Cal();
};




#endif