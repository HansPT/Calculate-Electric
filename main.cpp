#include "KhachHang.h"
#include "BienLai.h"
#include "Calculate.h"

#include <iostream>

#define ADD       1
#define REMOVE    2
#define PAYCAL    3
#define DISPLAY   4

int main()
{
    Cal A;
    int number{0};
    while (true)
    {
        std::cout << "********************************\n";
        std::cout << "1.Add new Customer \n";
        std::cout << "2.Remove Customer by Electronic code\n";
        std::cout << "3.Calculate electronic payment for customer\n";
        std::cout << "4.Display all \n";
        std::cout << "Enter number: ";
        std::cin >> number;
        std::cout << "********************************\n";
        switch(number)
        {
            case ADD:
            {
                A.add();

            }
            break;
            case REMOVE:
            {

                A.remove();
            }
            break;
            case PAYCAL:
            {
                A.calculate();
            }
            break;
            case DISPLAY:
            {
                A.print();
            }
            break;
            default:
            {

            }
            break;
        }
    }
    return 0;
}