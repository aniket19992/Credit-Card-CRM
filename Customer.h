#ifndef CUSTOMER_H
#define CUSTOMER_H

#include<iostream>
#include<memory>
#include"CreditCard.h"

using PCreditCard = std::shared_ptr<CreditCard>;
using Reftype = std::reference_wrapper<PCreditCard>;

class Customer
{
private:
std::string _id;
std::string _name;
int _age;
Reftype _credit_card;
public:
    // default constructor
    Customer() = default;
    // copy constructor
    Customer(const Customer &) = delete;
    // move constructor
    Customer(Customer &&) = delete;
    // copy assignment
    Customer &operator=(Customer &) = delete;
    // move assignment
    Customer &operator=(Customer &&) = delete;
    // destructor
    ~Customer() = default;

   Customer(std::string id, std::string name, int age, Reftype rf);
    std::string id() const { return _id; }

    std::string name() const { return _name; }

    int age() const { return _age; }
    void setAge(int age) { _age = age; }

    Reftype creditCard() const { return _credit_card; }

    friend std::ostream &operator<<(std::ostream &os, const Customer &rhs);

};

#endif // CUSTOMER_H
