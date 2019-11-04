#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    int a, b;
    int add, times;

    cout<<"Type first number: ";
    cin>>a;
    cout<<"Type second number: ";
    cin>>b;
    cout<<"\n\n";

    add=a+b;
    times=a*b;

    cout<<setw(7)<<a<<"\n";
    cout<<"+"<<setw(6)<<b<<"\n";
    cout<<" -------\n";
    cout<<setw(7)<<add<<"\n";

    cout<<"\n\n";

    cout<<setw(7)<<a<<"\n";
    cout<<"x"<<setw(6)<<b<<"\n";
    cout<<" -------\n";
    cout<<setw(7)<<times<<"\n";


 return 0;
}
