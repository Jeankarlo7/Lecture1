#include <cmath>
#include <cctype>
#include <iostream>
#include <string>

#include "Triangle.h"

using namespace std;

// double area(double s1, double s2, double s3) {
//   // This is using Heron's Formula for the area of a circle
//   double s = (s1 + s2 + s3) / 2.0;
//   double area = sqrt(s * (s - s1) * (s - s2) * (s - s3));
//   return area;
// }

// double sumAreas(Triangle triangles[], int numTriangles)
// {
//   // Code to sum the areas of all the triangles in the array

//   double sum = 0.0;
//   for(int i=0; i<numTriangles; i++) {
//     sum += triangles[i].getArea();
//   }

//   return sum;

// }



int main()
{

  Triangle t1(10,10,10);
  cout << "Area is:" << t1.getArea() << endl;

  cout << "Dummy cout" << endl;
  
  Triangle t2(20,20, 20);
  cout << "Area is:" << t2.getArea() << endl;

  Triangle t3(10, 20, 30);
  cout << "Area is:" << t3.getArea() << endl;

  cout << "That's all Scratch3!" << endl;

  Triangle myTriangles[] = { t1, t2, t3 };

  cout << "The sum of the areas is: " << Triangle::sumAreas(myTriangles, 3) << endl;
  
  t3.enlarge(2.0);

  cout << "Enlarged area is:" << t3.getArea() << endl;

}
