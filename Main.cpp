

#include"Customer.h"
#include<memory>
#include<vector>
#include<list>
#include<algorithm>
#include<numeric>
#include"functionalities.h"
#include<functional>

using PCreditCard = std::shared_ptr<CreditCard>;
using Reftype = std::reference_wrapper<PCreditCard>;
using DcreditCard = std::vector<PCreditCard>;

using PCustomer = std::shared_ptr<Customer>;
using DCustomer = std::list<PCustomer>;

int main(){
DCustomer data;
DcreditCard creditData;

    Createobjects(data,creditData);
  std::list<std::function<void(DCustomer &,int)>> functions_Set_A;
        functions_Set_A.push_back(function1);
        functions_Set_A.push_back(function2);

     

        auto j = std::bind(&function1, std::ref(data), 4.5);
        auto k = std::bind(&function2, std::ref(data), 6.1);
        auto function_set_B = {j, k};

        for (auto m : function_set_B)
        {
            HighOrder2(data, 21, m);
        }

        function3(data);
}