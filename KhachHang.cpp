#include "KhachHang.h"
#include<iostream>


void KhachHang::setName(std::string &name)
{
    mName = name;
}
std::string KhachHang::getName()
{
    return mName;
}

void KhachHang::setAddress(std::string &address)
{
    mAddress = address;
}
std::string KhachHang::getAddress()
{
    return mAddress;
}

void KhachHang::setElectric(unsigned int &electric)
{
    mElectricCode = electric;
}
unsigned int KhachHang::getElectric()
{
    return mElectricCode;
}

void KhachHang::print()
{
    std::cout << "Name: " << mName << '\n';
    std::cout << "Address: " << mAddress << '\n';
    std::cout << "Electric: " << mElectricCode << '\n';
}

KhachHang::KhachHang() = default;
KhachHang::KhachHang(std::string &name, std::string &address, unsigned int electric)
{
    this->setAddress(address);
    this->setElectric(electric);
    this->setName(name);
}
KhachHang::~KhachHang() = default;