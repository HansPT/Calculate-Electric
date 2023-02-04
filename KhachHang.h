#ifndef __KHACHHANG__
#define __KHACHHANG__

#include <string>
#include "BienLai.h"

class KhachHang
{
protected:
    std::string mName;
    std::string mAddress;
    unsigned int mElectricCode{0};
public:
    void setName(std::string& name);
    std::string getName();

    void setAddress(std::string& address);
    std::string getAddress();

    void setElectric(unsigned int& electric);
    unsigned int getElectric();

    void print();

    KhachHang();
    KhachHang(std::string& name, std::string& address, unsigned int electric);
    ~KhachHang();

};


#endif