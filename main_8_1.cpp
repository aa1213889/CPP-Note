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
    x = i;
    y = j;
  };
  double area()
  {
    return 0;
  }
};
class Cirecle : public Point
{
private:
  double radius;

public:
  Cirecle(double a, double b, double r) : Point(a, b)
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
  Point a(1.5, 6.7);
  Cirecle c(1.5, 6.7, 2.5);
  cout << a.area() << endl; //点的面积0
  cout << c.area() << endl; //圆的面积19.6349

  Point *p = &c;             //子类对象地址 赋值给 基类的指针
  Point &d = c;              //子类对象 初始化给 基类的引用
  cout << p->area() << endl; //调用的基类的area() 面积0
  cout << d.area() << endl;  //调用的基类的area() 面积0

  Cirecle *p1 = &c;
  Cirecle &d1 = c;
  cout << p1->area() << endl; //调用的子类的area() 面积19.6349
  cout << d1.area() << endl;  //调用的子类的area() 面积19.6349
  return 0;
}