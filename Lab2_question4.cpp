#include <iostream>
using namespace std;
int main()
{
int d,days,weeks,years,t1,t2;
cout << "Enter the no. of days"<<"\n";
cin >> d;
years=d/365;
t1=d-365*(years);
weeks=t1/7;
t2=t1-7*(weeks);
days=t2;
cout << "The no. of years =" << years<<"\n";
cout << "The no.of weeks =" << weeks<<"\n";
cout << "The no.of days =" << days<<"\n";
}


