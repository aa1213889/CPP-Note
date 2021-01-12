#include <iostream>
using namespace std;
class Point
{
private:
  int x, y;

public:
  void Setxy(int a, int b)
  {
    x = a;
    y = b;
  }
  void Movie(int a, int b)
  {
    x = x + a;
    y = y + b;
  }
  void Display()
  {
    cout << x << "," << y << endl;
  }
  int Getx()
  {
    return x;
  }
  int Gety()
  {
    return y;
  }
};
void print(Point *point)
{
  point->Display();
}
void print(Point &point)
{
  point.Display();
}
int main()
{
  Point A, B, *p; //声明对象 A,B 和指针 *p
  Point &RA = A;  //声明对象RA为对象A的引用
  A.Setxy(25, 55);
  B = A;              //开辟了一个新内存 把A的内容复制过去 修改B后不会影响A
  p = &B;             //指针p 指向了&B的内存地址
  B.Display();        //25,55
  p->Setxy(112, 115); //指针调取函数:  指针名-> funcname()
  B.Display();        //112,115
  p->Display();       //112,115
  B.Setxy(233, 322);
  B.Display();       //233,322
  p->Display();      //233,322
  A.Display();       //25,55
  RA.Display();      //25,55
  RA.Movie(-80, 23); //移动点
  A.Display();       //-55,78
  RA.Display();      //-55,78
  return 0;
}