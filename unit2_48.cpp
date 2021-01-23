#include <iostream>
using namespace std;
template <class T>
class Complex
{
  T real, image;

public:
  Complex(T a, T b)
  {
    real = a;
    image = b;
  }
  Complex(T a)
  {
    real = a;
    image = 0;
  }
  void pr()
  {
    char c;
    c = image > 0 ? '+' : '-';
    if (image != 0)
    {
      cout << (image > 0 ? image : -image) << endl;
      cout << real << c << (image > 0 ? image : -image) << "i" << endl;
    }
    else
    {
      cout << real << endl;
    }
  }
};
int main()
{
  Complex<double> a(16.5, -7.8);
  a.pr();
  Complex<int> b(6);
  b.pr();
  return 0;
}