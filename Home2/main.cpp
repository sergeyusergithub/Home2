﻿#include <iostream>
#include "fraction.hpp"

int main(){
    setlocale(LC_ALL, "Russian");
    fraction f1(1, -2);
    fraction f2(1, -4);

    fraction f4;

    std::cout << "Дробь инициализированная 0 = " << f4.Real_Number() << '\n';

    f4 = f1; // используется конструктор копирования по умолчанию создается компилятором

    std::cout << "Дробь скопированная (-1/2) = " << f4.Real_Number() << "\n\n";
   

    std::cout << "Начальное значение 1й дроби: -1/2 = " << f1.Real_Number() << '\n';
    std::cout << "Начальное значение 2й дроби:-1/4 = " << f2.Real_Number() << '\n' << std::endl;;

    // проверка сложения дробей
    Sum(f1, f2);

    std::cout << "-1/2 + (-1/4) = " << f1.Real_Number() << '\n';

    f1 = f4; // возвращаем первоначальные значения объекта f1

    // проверка умножения дробей
    Multiply(f1, f2);

    std::cout << "-1/2 * (-1/4) = " << f1.Real_Number() << '\n';

    f1 = f4; // возвращаем первоначальные значения объекта f1

    // проверка вычитания дробей
    Sub(f1, f2);

    std::cout << "-1/2 - (-1/4) = " << f1.Real_Number() << '\n';

    f1 = f4; // возвращаем первоначальные значения объекта f1

    // проверка деления дробей
    Division(f1, f2);

    std::cout << "-1/2 : (-1/4) = " << f1.Real_Number() << "\n\n";

    f1 = f4; // возвращаем первоначальные значения объекта f1


    // проверка сложения дроби и числа
    Sum(f1, 1);

    std::cout << "-1/2 + 1 = " << f1.Real_Number() << '\n';

    f1 = f4; // возвращаем первоначальные значения объекта f1

    // проверка умножения дроби и числа
    Multiply(f1, 2);

    std::cout << "-1/2 * 2 = " << f1.Real_Number() << '\n';

    f1 = f4; // возвращаем первоначальные значения объекта f1

    // проверка вычитания дроби и числа
    Sub(f1, -1);

    std::cout << "-1/2 - (-1) = " << f1.Real_Number() << '\n';

    f1 = f4; // возвращаем первоначальные значения объекта f1

    // проверка деления дроби на число
    Division(f1, 2);

    std::cout << "-1/2 : 2 = " << f1.Real_Number() << "\n\n";

    f1 = f4; // возвращаем первоначальные значения объекта f1


    // проверка на правильность дроби, если дробь правильная
    std::cout << "Начальное значение 1й дроби: -1/2 = " << f1.Real_Number() << '\n';
    if (f1.Proper_fraction())
        std::cout << "Дбробь правильная\n\n";
    else
        std::cout << "Дробь не правильная\n\n";

    // проверка на правильность дроби, если дробь не правильная
    fraction f5(3, 2);
    std::cout << "Дробь: 3/2 = " << f5.Real_Number() << '\n';
    if (f5.Proper_fraction())
        std::cout << "Дбробь правильная\n\n";
    else
        std::cout << "Дробь не правильная\n\n";

    

    // проверка если дробь создается с 0 знаминателем, то бросается исключение
    try {
        fraction f3(1, 0);
    }
    catch (std::exception ex) {
        std::cout << ex.what();
        return 1;
    }  

    return 0;
}