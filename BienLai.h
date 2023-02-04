#ifndef __BIENLAI__
#define __BIENLAI__

// #include<string>
#include "KhachHang.h"

class BienLai
{
protected:
    unsigned int mOldE{0};
    unsigned int mNewE{0};
    double mMoney{0.0};
    KhachHang KH;
public:
    void setOldE(unsigned int& olde);
    unsigned int getOldE();

    void setNewE(unsigned int& newe);
    unsigned int getNewE();

    void setMoney(double& money);
    double getMoney();

    void print();

    BienLai(unsigned int OldE, unsigned int NewE, double Money);
    BienLai(unsigned int OldE, unsigned int NewE,KhachHang khach);
//     BienLai(unsigned int OldE, unsigned int NewE,KhachHang khach)
// // :khach()
// :mOldE{OldE},mNewE{NewE},KH(khach)
// {
    

    BienLai();
    ~BienLai();


    void setKH(KhachHang kh);
    KhachHang getKH();

};


#endif