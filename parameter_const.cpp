#include <iostream>
#include <cstring>
using namespace std;
class Cube
{
 private:
 int side;
 public:
 Cube(int x)
 {
 side=x;
 }
 int getData()
 {
 return side;
 }
};
 
int main()
{
Cube c1(10);
Cube c2(20);
Cube c3(30);
cout << c1.getData()<<endl;
cout << c2.getData()<<endl;
cout << c3.getData()<<endl;
}