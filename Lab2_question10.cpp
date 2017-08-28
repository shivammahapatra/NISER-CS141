#include <iostream>
using namespace std;
int main()
{
int m1,m2,m3,m4,m5;
float tot,tot1,avg,per;
cout << "Enter the marks of five subjects "<<"\n";
cin >> m1;
cin >> m2;
cin >> m3;
cin >> m4;
cin >> m5;
cout << "Enter the total marks "<<"\n";
cin >> tot1;
tot=m1+m2+m3+m4+m5;
avg=tot/5;
per=(tot/tot1)*100;
cout << "The total score = "<<tot<<"\n";
cout << "The average score = "<<avg<<"\n";
cout << "The percentage = "<<per<<"\n";
}

