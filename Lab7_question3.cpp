#include <iostream>
using namespace std;
class rect
{
 public:
 double l;
 double b;
 double per()
 {
  return 2*(l+b);
 }
 double area()
 {
  return l*b;
 } 
};
int main()
{
 rect rect1;
 rect rect2;
 double p=0.0,per1,per2;
 double a=0.0,area1,area2;
 cout<<"Enter the length of the first rectangle\n";
 cin>>rect1.l;
 cout<<"Enter the breadth of the first rectangle\n";
 cin>>rect1.b;
 cout<<"Enter the length of the second rectangle\n";
 cin>>rect2.l;
 cout<<"Enter the breadth of the second rectangle\n";
 cin>>rect2.b;
 per1=rect1.per();
 per2=rect2.per();
 if(per1>per2)
 cout<<"The first rectangle has a greater perimeter\n";
 else if(per2>per1)
 cout<<"The second rectangle has a greater perimeter\n";
 else 
 cout<<"Both have the same perimeter\n";
 area1=rect1.area();
 area2=rect2.area();
 if(area1>area2)
 cout<<"The first rectangle has a greater area\n";
 else if(area2>area1)
 cout<<"The second rectangle has a greater area\n";
 else
 cout<<"Both have the same area\n";
}
 
