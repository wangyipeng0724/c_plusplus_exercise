#include <iostream>
#include "DLL_add.h"
#include "DLL_sub.h"
#include "Lib_minus.h"
#include "Lib_multiply.h"

int main()
{
    int a, b, c, d;
    std::cout << "请输入4个数： ";
    std::cin >> a >> b >> c >> d;
    int result = minus_fun(add_multiply(sub_fun(add_fun(a, b), c), d), 3);
    std::cout << "((a+b) – c) * d / 3 = " << result << "\n";

    //int add_result = add_fun(1, 2);
    //int sub_result = sub_fun(1, 2);
    //int lib_minus_result = minus_fun(4, 2);
    //std::cout << "Add 1+2=" << add_result << "\n";
    //std::cout << "Sub 1-2=" << sub_result << "\n";
    //std::cout << "Minus 4/2=" << lib_minus_result << "\n";
    // lib_multiply_result = add_multiply(2, 3);
    //std::cout << "Multiply 2 * 3=" << lib_multiply_result;
}
