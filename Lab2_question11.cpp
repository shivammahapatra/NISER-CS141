#include <iostream>
using namespace std;
int main()
{
float P,T,R,SI;
cout << "Enter the principal amount in Rs"<<"\n";
cin >> P;
cout << "Enter the time period in years"<<"\n";
cin >> T;
cout << "Enter the rate of interest "<<"\n";
cin >> R;
SI=(P*T*R)/100;
cout << "The simple interest is "<<SI<<"\n";
}

