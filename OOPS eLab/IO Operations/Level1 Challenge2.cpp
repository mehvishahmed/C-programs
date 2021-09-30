#include <iostream>
#define PI 3.14
using namespace std;
int main()
{
    int r,s,cpool,spool;
    cin>>r;
    cin>>s;
    cpool=PI*r*r;
    spool=s*s;
    if(cpool>spool)
        cout<<"I Prefer Centre 1"<<endl;
    else 
          cout<<"I Prefer Centre 2"<<endl;
    return 0;
}
