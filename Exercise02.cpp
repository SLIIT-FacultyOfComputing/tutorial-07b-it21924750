#include "Rectangle.h"
#include "Circle.h"
#include <iostream>
using namespace std;

int main() {
  // ========= DO NOT CHANGE THE INPUT CODE BELOW ==================
   int length, width, radius;
   cout << "Enter length of Rectangle : ";
   cin >> length;
   cout << "Enter width of Rectangle : ";
   cin >> width;
   cout << "Enter radius of Circle : ";
   cin >> radius;
   // ======== DO NOT CHANGE THE CODE GIVEN ABOVE ====================
   
   Rectangle *r1;// 1. Create a dynamic Rectangle type variable (pointer)
   r1 = new Rectangle(length,width);
 // 2. Create a dynamic Rectangle Object set the length and width that was input from the keyboard
  Circle *c1;
// 3. Create a dynamic Circle type variable (pointer)
   c1 = new Circle(radius);
// 4. Create a dynamic Circle Object set radius that was input from the keyboard
   r1->display();
// 5. Call the display method of the Rectangle Object
   c1->display();
// 6. Call the display method of the Circle Object
   delete r1;// 7. Delete the Rectangle Object from memory
   delete c1;
// 8. Delete the Circle Object from memory
  
  
   // ============ DO NOT CHANGE THE CODE BELOW ===================
   cout << "End of Program" << endl;
  
}
