#include "Calculate.h"
#include <iostream>
void Cal::add()
{
    std::string name;
    std::string address;
    unsigned int elec{0};
    std::cout << "Type name: ";
    std::cin >> name;
    std::cout << "Address: ";
    std::cin >> address;
    std::cout << "Type Electronic: ";
    std::cin >> elec;
    std::cout << "Type old electronic: ";
    unsigned int olde{0};
    std::cin >> olde;
    std::cout << "Type new electronic: ";
    unsigned int newe{0};
    std::cin >> newe;
    mList.push_back(BienLai(olde,newe,KhachHang(name,address,elec)));

}
void Cal::remove()
{
    std::cout << "Type Electronic code: ";
    unsigned int ECode{0};
    std::cin >> ECode;
    for (unsigned int i = 0; i < mList.size(); i++)
    {
        mList.erase(mList.begin() + i);
    }
    std::cout << "Erase success\n";
}
void Cal::calculate()
{
    // std::cout << "Type old electronic: ";
    // unsigned int olde{0};
    // std::cin >> olde;
    // std::cout << "Type new electronic: ";
    // unsigned int newe{0};
    // std::cin >> newe;
    // std::cout << "Type old electronic: ";
    std::cout << "Type Electronic code: ";
    unsigned int ECode{0};
    std::cin >> ECode;
    for(unsigned int i = 0; i < mList.size(); i++)
    {
        mList[i].getKH().getElectric() == ECode;
        {
            std::cout << mList[i].getKH().getName() << " has to pay: " << (mList[i].getNewE() - mList[i].getOldE()) * 5 << " $\n";
        }
    }

}
void Cal::print()
{
    for (unsigned int  i = 0; i < mList.size(); i++)
    {
        mList[i].getKH().print();
    }
    
}

Cal::Cal() = default;
Cal::Cal(std::vector<BienLai> bienlai)
{
    mList = bienlai;
}
Cal::~Cal() = default;