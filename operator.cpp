#include <iostream>
using namespace std;
class Box
{
private:
  double length, width, height;

public:
  double getVloume()
  { //获取体积
    return length * width * height;
  }
  Box(double l, double w, double h)
  {
    length = l;
    width = w;
    height = h;
  }
  Box() {}
  Box operator+(const Box &b) // 重载 + 运算符，用于把两个 Box 对象相加
  {
    Box box(this->length + b.length, this->width + b.width, this->height + b.height);
    return box;
  }
};
int main()
{
  Box Box1(6.0, 7.0, 5.0);    // 声明 Box1，类型为 Box
  Box Box2(12.0, 13.0, 10.0); // 声明 Box2，类型为 Box
  double volume;              // 把体积存储在该变量中

  volume = Box1.getVloume(); // Volume of Box1 : 210     6 * 7 * 5
  cout << "box1 vloume is:" << volume << endl;

  volume = Box2.getVloume(); //Volume of Box2 : 1560   12 * 13 *10
  cout << "box2 vloume is:" << volume << endl;

  Box Box3;
  Box3 = Box1 + Box2;        // 使用重载 '+' 运算符
  volume = Box3.getVloume(); //Volume of Box3 : 5400   (6+12) * (7+13) * (5*10)
  cout << "box3 vloume is:" << volume << endl;

  return 0;
}