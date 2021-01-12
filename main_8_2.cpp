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
  virtual double area()
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

void display(Point *p) //注意是Point 不是子类Cirecle
{
  cout << p->area() << endl;
}

void display(Point &a) //注意是Point 不是子类Cirecle
{
  cout << a.area() << endl;
}

int main()
{
  Point a(1.5, 6.7);
  Cirecle c(1.5, 6.7, 2.5);
  Point *p = &c; //子类对象地址 赋值给 基类的指针
  Point &d = c;  //子类对象 初始化给 基类的引用
  display(a);    //0  调取基类对象的area()函数

  /**
   *  动态联编
   *  display(p) display(d)
   *  调取子类对象的area()函数 如果基类的area()没有加上virtual 则调用的为基类area()函数
  */
  display(p); //19.6349
  display(d); //19.6349 调取子类对象的area()函数
  return 0;
}