// Multiple Inheritance
#include <iostream>
using namespace std;
 
class Base1 {
  public:
    Base1()
    {
      cout << "This is Base 1" << endl;
    }
};
 
class Base2 {
  public:
    Base2()
    {
      cout << "This is Base 2" << endl;
    }
};
 
class Child: public Base1, public Base2 {
 
};
 
int main()
{
    Child obj;
    return 0;
}