#include "fraction.hpp"


void fraction::zero_excep(long long num){
    if (num == 0){
        throw std::exception("Error: Deveder by zero");
    }
}

bool fraction::sign_fract(){
    if ((numerator_ > 0 && denominator_ > 0) ||
    (numerator_ < 0 && denominator_ < 0)){
        return false;
    }

    return true;
}


void Sum(fraction& frac1,fraction& frac2){
            
    frac1.numerator_ = frac1.numerator_ * frac2.denominator_ + frac2.numerator_ * frac1.denominator_;
    frac1.denominator_ *= frac2.denominator_;
    frac1.sign_ = frac1.sign_fract();
}

void Multiply(fraction& frac1, fraction& frac2)
{
    frac1.numerator_ *= frac2.numerator_;
    frac1.denominator_ *= frac2.denominator_;
    frac1.sign_ ^= frac2.sign_;
}

void Sub(fraction& frac1, fraction& frac2)
{
    frac1.numerator_ = frac1.numerator_ * frac2.denominator_ - frac2.numerator_ * frac1.denominator_;
    frac1.denominator_ *= frac2.denominator_;
    frac1.sign_ = frac1.sign_fract();
}

void Division(fraction& frac1, fraction& frac2)
{
    frac1.numerator_ *= frac2.denominator_;
    frac1.denominator_ *= frac2.numerator_;
    frac1.sign_ ^= frac2.sign_;
}





void Sum(fraction& frac, long long num)
{
    fraction tmp(num, 1);
    Sum(frac, tmp);
}

void Multiply(fraction& frac, long long num)
{
    fraction tmp(num, 1);
    Multiply(frac, tmp);
}

void Sub(fraction& frac, long long num)
{
    fraction tmp(num, 1);
    Sub(frac, tmp);
}

void Division(fraction& frac, long long num)
{
    fraction tmp(num, 1);
    Division(frac, tmp);
}

float fraction::Real_Number(){
   return numerator_*(1.0)/denominator_;
}

bool fraction::Proper_fraction() {
    return abs(numerator_) >= abs(denominator_) ? false : true;
}


