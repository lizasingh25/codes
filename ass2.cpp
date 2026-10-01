#include <iostream>
using namespace std;
int main(){
    float a;
    float b;
    float c;
    cout<<"enter cost of pencil: "<<endl;
    cin>>a;
    cout<<"enter cost of eraser: "<<endl;
    cin>>b;
    cout<<"enter cost of sharpener: "<<endl;
    cin>>c;
float total;
total=a+b+c+((a+b+c)*18)/100;
cout<<"total cost of items with gst is "<<total;
return 0;
}