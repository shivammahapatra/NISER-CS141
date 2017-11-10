#include <iostream>
using namespace std;
class Point
{
 public: void print(int x,int y)
 {
  cout<<"("<<x<<","<<y<<")\n";
 }
};
int main()
{
 Point p;
 int x,y;
 cout<<"Enter the x-coordinate\n";
 cin>>x;
 cout<<"Enter the y-coordinate\n";
 cin>>y;
 p.print(x,y);
}

 
