#include "BienLai.h"
#include <iostream>
void BienLai::setOldE(unsigned int& olde)
{
    mOldE = olde;
}
unsigned int BienLai::getOldE()
{
    return mOldE;
}

void BienLai::setNewE(unsigned int& newe)
{
    mNewE = newe;
}
unsigned int BienLai::getNewE()
{
    return mNewE;
} 
void BienLai::setMoney(double& money)
{
    mMoney = money;
}
double BienLai::getMoney()
{
    return mMoney;
}


void BienLai::print()
{
    std::cout << "BienLai" << '\n';
    std::cout << "So dien cu: " << mOldE << '\n';
    std::cout << "So dien moi: " << mNewE << '\n';
    
 }

BienLai::BienLai(unsigned int OldE, unsigned int NewE, double Money)
{
    this->setOldE(OldE);
    this->setNewE(NewE);
    this->setMoney(Money);
}

BienLai::BienLai() = default;
BienLai::~BienLai() = default;

BienLai::BienLai(unsigned int OldE, unsigned int NewE,KhachHang khach)
// :khach()
:mOldE{OldE},mNewE{NewE},KH(khach)
{
    
}
// {
//     this->setOldE(mOldE);
//     this->setNewE(mNewE);
//     this->setMoney(mMoney);
//     // this->setKH(khach);
//     KH = khach;
// }


// void BienLai::setKH(KhachHang kh)
// {
//     KH = kh;
// }
// KhachHang  BienLai::getKH()
// {
//     return KH;
// }