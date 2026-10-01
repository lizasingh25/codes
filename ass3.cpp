#include <iostream>
using namespace std;
int main(){
    float p;
    float r;
    float t;
    float si;
    cout<<"enter principal amount:"<<endl;
    cin>>p;
    cout<<"enter rate of interest:"<<endl;
    cin>>r;
    cout<<"enter time in years:"<<endl;
    cin>>t;
    si=(p*r*t)/100;
    cout<<"simaple interest is:"<<si;
    return 0;
}