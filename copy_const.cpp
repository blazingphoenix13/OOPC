#include <iostream>
#include <cstring>
using namespace std;
class Cube
{
 
public:
 int side;
};
 
int main()
{
 Cube c1;
 c1.side=5;
 
 Cube c2(c1);
 cout << c2.side<<endl;
}