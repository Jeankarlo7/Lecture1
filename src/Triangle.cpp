
#include <math.h>
#include "Triangle.h"

double Triangle::getArea()
{
  // This is using Heron's Formula for the area of a circle
  double s = (this->side1 + this->side2 + this->side3) / 2.0;
  double area = sqrt(s * (s - this->side1) * (s - this->side2) * (s - this->side3));
  return area;

}

bool Triangle::largerThan(Triangle t2) 
{
  return this->getArea() > t2.getArea();
}

double Triangle::sumAreas(Triangle triangles[], int numTriangles)
{
  // Code to sum the areas of all the triangles in the array

  double sum = 0.0;
  for (int i = 0; i < numTriangles; i++)
  {
    sum += triangles[i].getArea();
  }

  return sum;
}

void Triangle::enlarge(double factor)
{
  this->setSide1(this->getSide1() * factor);
  this->setSide2(this->getSide2() * factor);
  this->setSide3(this->getSide3() * factor);
}