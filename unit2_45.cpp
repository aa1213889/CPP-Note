#include <iostream>
using namespace std;
template <class T>
class F
{
private:
  T x, y, s;

public:
  F(T a = 0, T b = 0)
  {
    x = a;
    y = b;
  }
  void sum()
  {
    s = x + y;
  }
  T gets();
};
template <class Te>
Te F<Te>::gets()
{
  return s;
};

int main()
{
  F<double> a(1.5, 3.8);
  return 0;
}
