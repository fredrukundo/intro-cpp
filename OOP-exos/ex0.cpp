#include <iostream>
#include <cmath>

/*
   @question:
      Write a C++ program to implement a class called Circle that has
      private member variables for radius.
      Include member functions to calculate the circle's area and circumference.
   @Area = pow(r,2) * pi
   @circumferece = pi * radius * 2
*/
const double pi = 3.14;

class Circle
{
private:
   double radius;

public:
   // constructor to initialize the circle object with a radius
   Circle(double rad)
   {
      radius = rad;
   }
   double Calculate_Area()
   {
      return pi * pow(radius, 2);
   }
   double calculate_circumference()
   {
      return pi * radius * 2;
   }
};

int main()
{
   double rad, rad2, Area1, Area2, circumference1, circumference2;
   std::cout << "input the radius of circle: ";
   std::cin >> rad;
   // creation of an object and `direct initialize` it using constructor
   Circle circle(rad);
   std::cout << "input the radius of circle2: ";
   std::cin >> rad2;
   // same thing but this uses copy initialization, known as `indirect initialization`
   Circle objCircle = Circle(rad2);

   Area1 = circle.Calculate_Area();
   std::cout << "Area1 = " << Area1 << std::endl;

   circumference1 = circle.calculate_circumference();
   std::cout << "circumference1 = " << circumference1 << std::endl;

   Area2 = objCircle.Calculate_Area();
   std::cout << "Area2 = " << Area2 << std::endl;

   circumference2 = objCircle.calculate_circumference();
   std::cout << "circumference2 = " << circumference2 << std::endl;
}
