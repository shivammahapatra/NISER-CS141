#include <iostream>
using namespace std;
int main()
{
float a,b,sum,diff,product,d,rem;
int quotient;
cout << "Enter 1st number ";
cin >> a;
cout << "Enter 2nd number ";
cin >> b;
sum = a+b;
diff = a-b;
product= a*b;
quotient= a/b;
d=quotient*b;
rem=a-d;
cout << "The sum is=" << sum;
cout << "1st number - 2nd number=" << diff;
cout << "Their product is=" << product;
cout << "1st number/2nd number=" << quotient;
cout << "The remainder is=" << rem;
}
 

