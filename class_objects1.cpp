#include <iostream>
#include <cstring>
using namespace std;
 
class Box {
private:
 double length; // Length of a box
 double breadth; // Breadth of a box
public:
 double height; // Height of a box
 void setData(int l, int b,int h)
 {
 length=l;
 breadth=b;
 height=h;
 }
 int getLength()
 {return length;}
 int getBreadth()
 {return breadth;}
};
 
int main( ) {
  
  	Box b1;
  	//setting length, breadth and height
  	b1.setData(10,6,5);
  	//accessing private members using member functions
  	cout<<"Length of Box: "<<b1.getLength()<<endl;
  	cout<<"Breadth of Box: "<<b1.getBreadth()<<endl;
  	// accessing public member height using (.) operator
  	cout<<"Height of Box: "<<b1.height<<endl;
   return 0;
}