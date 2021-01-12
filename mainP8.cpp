/*49题*/
#include <iostream>
#include <math.h>
using namespace std;

class Simple
{
  int x, y;

public:
  Simple() { x = y = 0; }
  Simple(int i, int j)
  {
    x = i;
    y = j;
  };
  void copy(Simple &s)
  {
    x = s.x;
    y = s.y;
  }
  void setxy(int i, int j)
  {
    x = i;
    y = j;
  }
  void print()
  {
    cout << "x:" << x << ",y:" << y << endl;
  }
};
void func(Simple s1, Simple &s2)
{
  s1.setxy(30, 40);
  s2.setxy(70, 80);
}
int main()
{
  Simple obj1(1, 2), obj2;
  obj2.copy(obj1);
  func(obj1, obj2);
  obj1.print();
  obj2.print();
  return 0;
}