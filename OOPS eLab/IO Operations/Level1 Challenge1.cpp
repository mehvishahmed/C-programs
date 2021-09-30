#include <iostream>
using namespace std;
int main()
{
    int ageofcitizen;
    cin>>ageofcitizen;
    if(ageofcitizen>=18 && ageofcitizen<=60)
        cout<<"Eligible for Voting";
    else
        cout<<"Not Eligible for Voting";
	  return 0;
}
