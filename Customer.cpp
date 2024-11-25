#include "Customer.h"
std::ostream &operator<<(std::ostream &os, const Customer &rhs) {
    os << "_id: " << rhs._id
       << " _name: " << rhs._name
       << " _age: " << rhs._age
       << " _credit_card: " << *(rhs._credit_card.get());
    return os;
}
Customer::Customer(std::string id, std::string name, int age, Reftype rf):_id(id),_name(name),_age(age),_credit_card(rf)
{
    if (age>=18 && age<=99){
        setAge(age);
    }
    else{
        std::runtime_error ("not upto age");
    }
}
