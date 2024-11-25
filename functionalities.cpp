#include "functionalities.h"

void Createobjects(DCustomer &data, DcreditCard &CreditData)
{
    CreditData.emplace_back(std::make_shared<CreditCard>(123456,CreditCardType::ELITE,11000));
    CreditData.emplace_back(std::make_shared<CreditCard>(123457,CreditCardType::SAVING,11500));
    CreditData.emplace_back(std::make_shared<CreditCard>(123458,CreditCardType::PREMIUM,21000));
    CreditData.emplace_back(std::make_shared<CreditCard>(123459,CreditCardType::ELITE,32000));

data.emplace_back(std::make_shared<Customer>("aka101","Guddu",43,std::ref(CreditData[0])));
data.emplace_back(std::make_shared<Customer>("aka102","Pintu",23,std::ref(CreditData[1])));
data.emplace_back(std::make_shared<Customer>("aka103","Dhapu",90,std::ref(CreditData[2])));
data.emplace_back(std::make_shared<Customer>("aka104","Rangila",40,std::ref(CreditData[3])));

}

void HighOrder1(DCustomer &data, std::function<void(DCustomer&)> fn)
{    if (data.empty())
    {
        throw std::runtime_error("container is empty");
    }
    fn(data);
    std::cout<<std::endl;
}

void HighOrder2(DCustomer &data, float j, std::function<void(DCustomer &, float)> fn)
{
    if (data.empty()){
        throw std::runtime_error("container is empty");
    }
    fn(data,j);
    std::cout<<std::endl;

}

void function1(DCustomer &data, int max)
{
     if (data.empty()){
        throw std::runtime_error("container is empty");
    }
int result =0;
result = std::count_if(data.begin(),
data.end(),
[&](PCustomer & val){
    bool flag =0;
    if (val.get()->creditCard().get()->maxLimit() > max ){
        flag =1;
    }
    return flag;
});

std::cout<<"no of elements passed the threshold is "<<result<<"\n";
}

void function2(DCustomer &data, int ag)
{
        if (data.empty()){
        throw std::runtime_error("container is empty");
    }
    std::for_each(data.begin(),
    data.end(),
    [&](PCustomer & val){
        if (val.get()->age()>ag){
            std::cout<<"types are "<<DisplayEnum( val.get()->creditCard().get()->type())<<"\n"; 
        }
    });

}

void function3(DCustomer &data)
{

        if (data.empty()){
        throw std::runtime_error("container is empty");
    }
    bool flag =0;
    flag = std::all_of(data.begin(),
    data.end(),
    [&](PCustomer & val){
        bool t =0;
        if (val.get()->creditCard().get()->type()==CreditCardType::ELITE){
            t=1;
        }
        return t;
    });
    std::cout<<"if all of the instance are of credit card elite 1-> true & 0-> false , ans is ->"<<flag;
}
