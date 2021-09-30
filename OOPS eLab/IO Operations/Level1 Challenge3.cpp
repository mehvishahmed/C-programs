#include <iostream>
using namespace std;
int main()
{
    int tot_mins,hrs,mins; 
    cin>>tot_mins;
    hrs=tot_mins/60;
    mins=tot_mins%60;
    cout<<hrs<<" Hours and "<<mins<<" Minutes"<<endl;
    return 0;
}
