#include <iostream>
#include <cmath>
using namespace std;
int main()
{
float P,r,n,CI;
cout << "Enter the principal amount"<<"\n";
cin >> P;
cout << "Enter the rate of interest "<<"\n";
cin >>r;
cout << "Enter the time period in years "<<"\n";
cin >> n;
CI=P*(pow((1+r),n)-1);
cout << "The compound interest is "<<CI<<"\n";
}


