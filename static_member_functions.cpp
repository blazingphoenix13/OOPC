#include <iostream>
using namespace std;
 
class Cube {
 private:
      int side; // normal data member
   public:
      static int objectCount;// static data member
      // Constructor definition
      Cube()
        {
         // Increase every time object is created
         objectCount++;
      	}
      	// creating a static function that returns static data member
      	static int getCount() {
         return objectCount;
      }
};
// Initialize static member of class Box
int Cube::objectCount = 0;
 
int main(void) {
   Cube c1;
   // Object Count.
   cout << "Total objects: " << Cube::getCount() << endl;
 Cube c2;
   // Object Count.
   cout << "Total objects: " << Cube::getCount() << endl;
   return 0;
}