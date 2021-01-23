#include <iostream>
using namespace std;
class complex
{
private:
  double real, imag;

public:
  complex(double r = 0, double i = 0)
  {
    real = r;
    imag = i;
  };
  friend complex operator+(complex a, complex b) //通过友元函数 可以直接访问私有数据real, imag
  {
    double r = a.real + b.real;
    double i = a.imag + b.imag;
    return complex(r, i);
  };
  void show()
  {
    cout << real << "+" << imag << "i" << endl;
  }
};
int main()
{
  complex x(5, 3), y; //x.real = 5 imag =3 , y.real = 0,imag = 0;
  y = x + 7;          //相当于 y = operator+(x, 7)  调用构造函数将x与7初始化 有y = 12 + 3i
  y = 7 + y;          //相当于 y = operator+(7, y)  调用构造函数将7与y初始化 有y = 19 + 3i
  y.show();
  return 0;
}