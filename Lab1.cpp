#include <iostream>
#include <bitset>  
#include <climits>

void pr1() 
{
    setlocale (0,"Rus");
    std::cout << "Мишкин Михаил Андреевич, 221-352" <<"\n";
}

void pr2()
{

    std::cout << "Min int: " << INT_MIN
        << "\tMax int: " << INT_MAX
        << "\tSize of int: " << sizeof(int) << '\n';
    std::cout << "Min unsigned int: " << INT_MIN
        << "\tMax unsigned int: " << UINT_MAX
        << "\tSize of int: " << sizeof(unsigned int) << '\n';
    std::cout << "Min short: " << SHRT_MIN
        << "\tMax short: " << SHRT_MAX
        << "\tSize of short: " << sizeof(short) << '\n';
    std::cout << "Min long: " << LONG_MIN
        << "\tMax long: " << LONG_MAX
        << "\tSize of long: " << sizeof(long) << '\n';
    std::cout << "Min long long: " << LLONG_MIN
        << "\tMax long long: " << LLONG_MAX
        << "\tSize of long long: " << sizeof(long long) << '\n';
    std::cout << "Min double: " << DBL_MIN
        << "\tMax double: " << DBL_MAX
        << "\tSize of double: " << sizeof(double) << '\n'; 
    std::cout << "Min char: " << CHAR_MIN
        << "\tMax char: " << CHAR_MAX
        << "\tSize of long: " << sizeof(char) << '\n';

}

void pr3() 
{
    setlocale(0, "Rus");
    int x;
    std::cout << "Введите число: ";
    std::cin >> x;
    std::cout << "В бинарном виде: " << std::bitset<8*sizeof(x)>(x) << '\n';
    std::cout << "В шестнадцатеричном ввиде: " << std::hex << x << '\n';
    std::cout << "Bool: " << bool(x) << "\n";
    std::cout << "Double: " << double(x) << "\n";
    std::cout << "Char: " << char(x) << "\n";
}

void pr4() 
{
    setlocale(0, "Rus");
    int a, b;
    std::cout << "Введите коэффициенты a, b: ";
    std::cin >> a >> b;                           
    std::cout << a << "*x=" << b << "\n";         
    std::cout << "x=" << b << "/" << a << "\n";   
    std::cout << "x=" << b / a << "\n";             
    std::cout << "x=" << double(b) / a << "\n";             
}

void pr5() 
{
    setlocale(0, "Rus");
    double x1, x2;
    std::cout << "Введите координаты отрезка x1, x2: ";
    std::cin >> x1 >> x2;
    std::cout << "Середина отрезка находится в точке с координатой: "<< (x1 + x2) / 2 << "\n";
}

int main() 
{
    pr1();
    pr2();
    pr3();
    pr4();
    pr5();
    return 0;
}