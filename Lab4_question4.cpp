#include<iostream>
using namespace std;
int even_odd (int a)
{
 if(a%2==0)
 cout<<"The number is even";
 else 
 cout<<"The number is odd";
}
int main ()
{
 int a1;
 cout<<"Enter a number to check whether it is even or odd\n";
 cin>>a1;
 even_odd(a1);
}
