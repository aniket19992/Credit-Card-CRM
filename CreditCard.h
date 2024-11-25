#ifndef CREDITCARD_H
#define CREDITCARD_H

#include<iostream>
#include"CreditCardType.h"

class CreditCard
{
private:
int _number;
CreditCardType _type;
int _max_limit;
public:
     // default constructor
    CreditCard() = default;
    // copy constructor
    CreditCard(const CreditCard &) = delete;
    // move constructor
    CreditCard(CreditCard &&) = delete;
    // copy assignment
    CreditCard &operator=(CreditCard &) = delete;
    // move assignment
    CreditCard &operator=(CreditCard &&) = delete;
    // destructor
    ~CreditCard() = default;

    CreditCard(int no , CreditCardType ty, int max);

    int number() const { return _number; }

    CreditCardType type() const { return _type; }

    int maxLimit() const { return _max_limit; }

    void setNumber(int number) { _number = number; }

    void setMaxLimit(int max_limit) { _max_limit = max_limit; }

    friend std::ostream &operator<<(std::ostream &os, const CreditCard &rhs);
};
std::string DisplayEnum(CreditCardType ty);
#endif // CREDITCARD_H
