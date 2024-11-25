#include "CreditCard.h"
std::ostream &operator<<(std::ostream &os, const CreditCard &rhs) {
    os << "_number: " << rhs._number
       << " _type: " <<DisplayEnum(rhs._type ) 
       << " _max_limit: " << rhs._max_limit;
    return os;
}
std::string DisplayEnum(CreditCardType ty)
{
if (ty==CreditCardType::ELITE){
    return "ELITE";
}
else if (ty== CreditCardType::PREMIUM){
    return "PREMIUM";
}
else {
    return "SAVINGS";
}
}
CreditCard::CreditCard(int no, CreditCardType ty, int max) : _number(no), _type(ty), _max_limit(max)
{
    if (no>=100000 && no <=999999){
        setNumber(no);
    }else{
        std::runtime_error ("wrong Card no ");
    }
    if (max<10000){
        setMaxLimit(max);
    }else{
        std:: runtime_error ("limit is less");
    }
}
