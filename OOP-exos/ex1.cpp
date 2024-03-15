#include <iostream>


/*
   @question:
      Write a C++ program to create a class called Rectangle 
      that has private member variables for length and width. 
      Implement member functions to calculate the rectangle's area and perimeter.
*/

class Rectangle{
   private:
      double length;
      double width;
   public:
      Rectangle(double len, double wid)
      {
         length = len;
         width = wid;
      }
      double Area_rect()
      {
         return (length * width);
      }
      double perimeter()
      {
         return (2 * (length + width));
      }
};

int main()
{
   double len, wid, area, perimeter;
   
   std::cout << "input length of a rectangle: " << std::endl;
   std::cin >> len;

   std::cout << "input width of a rectangle: " << std::endl;
   std::cin >> wid;
   Rectangle rect(len, wid);

   area = rect.Area_rect();
   std::cout << "Area = " << area << std::endl;

   perimeter = rect.perimeter();
   std::cout << "Perimeter: " << perimeter << std::endl;
}
