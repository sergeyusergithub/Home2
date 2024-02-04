#pragma once

#ifndef FRACTION_HPP
#define FRACTION_HPP

#include <iostream>

// класс дробь
// раз нет публичных методов get и set, то
// большинство методов для вычисления используется в виде дружественных функций


class fraction {
public:

// конструктор по умолчанию
fraction():numerator_(0),denominator_(1),sign_(false){}

// конструктор с двумя параметрами
// числитель и знаменатель 
fraction(long long num,long long deno):numerator_(num),
            denominator_(deno){
    zero_excep(deno);
    this->sign_ = sign_fract();
}

// метод суммы двух дробей
friend void Sum(fraction& frac1,fraction& frac2);

// метод произведения двух дробей
friend void Multiply(fraction& frac1,fraction& frac2);

// метод разности двух дробей
friend void Sub(fraction& frac1, fraction& frac2);

// метод деления двух дробей
friend void Division(fraction& frac1, fraction& frac2);


// метод сложения дроби и целого числа
friend void Sum(fraction& frac, long long num);

// метод произведения дроби и целого числа
friend void Multiply(fraction& frac, long long num);

// метод разности дроби и целого числа
friend void Sub(fraction& frac, long long num);

// метод деления дроби и целого числа
friend void Division(fraction& frac, long long num);


// метод возвращающий действительное число дроби
float Real_Number(); 

// метод определяющий состояние правильности дроби
bool Proper_fraction(); // false - дробь не правильная
                        // true - дробь правильная

private:
long long numerator_; // числитель
long long denominator_; // знаменатель
bool sign_; //знак дроби false - положительный
            // true - отрицаетльный
// метод проверки знаменателя на 0 и бросающая исключение
void zero_excep(long long num);

// метод определяющий знак дроби
bool sign_fract();
};





#endif //FRACTION_HPP