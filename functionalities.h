#ifndef FUNCTIONALITIES_H
#define FUNCTIONALITIES_H

#include"Customer.h"
#include<memory>
#include<vector>
#include<list>
#include<algorithm>
#include<numeric>
#include<functional>

using PCreditCard = std::shared_ptr<CreditCard>;
using Reftype = std::reference_wrapper<PCreditCard>;
using DcreditCard = std::vector<PCreditCard>;

using PCustomer = std::shared_ptr<Customer>;
using DCustomer = std::list<PCustomer>;

// to create objects
void Createobjects(DCustomer& data,DcreditCard & CreditData);

/*Higher order function that takes the data and function and perfrom operation on data */
void HighOrder1(DCustomer &data, std::function<void(DCustomer &)> fn); 

/*Higher order function that takes the data and function and perfrom operation on data */

void HighOrder2(DCustomer &data, float j, std::function<void(DCustomer&, float)> fn); 
// a function to find the no of count of instance whose condition passes as second argument

void function1 (DCustomer& data, int max);


//a function to find and print the type of creditcard whose threshold is above
void function2 (DCustomer& data, int ag);

// a function to print true and false for all insatnmce passed the second paramter

void function3 (DCustomer& data);
#endif // FUNCTIONALITIES_H
