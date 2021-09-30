#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    float num1,num2;
    double resnum1,resnum2;
    cin>>num1;
    cin>>num2;
    resnum1=num1;
    resnum2=num2;
    std::cout<<fixed;
    std::cout<<std::setprecision(6)<<resnum1<<endl;
    std::cout<<std::setprecision(6)<<resnum2;
	  return 0;
}
