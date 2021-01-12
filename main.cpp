#include <iostream>
using namespace std;
const double PI = 3.14159;
class Point
{
private:
  double x, y;

public:
  Point(double i, double j)
  {
    x = i, y = j;
  }
  double area()
  {
    return 0;
  }
};
class Circle : public Point
{
private:
  double radius;

public:
  Circle(double a, double b, double r) : Point(a, b)
  {
    radius = r;
  }
  double area()
  {
    return PI * radius * radius;
  }
};
int main()
{
  Point *p = new Point(1.5, 6.7);
  Circle c(1.5, 6.7, 2.5);
  cout << "area of Point is" << p->area() << endl; //0
  cout << "area of Circle is" << c.area() << endl; //函数重写
  Point *p1 = &c;
  cout << "area of Circle is" << p1->area() << endl;
  Point &p2 = c;
  cout << "area of Circle is" << p2.area() << endl;
  return 0;
}