#include <iostream>
using namespace std;
template <class T>
class Max4
{
  T a, b, c, d;
  T Max(T a, T b)
  {
    return a > b ? a : b;
  }

public:
  Max4(T x1, T x2, T x3, T x4)
  {
    a = x1;
    b = x2;
    c = x3;
    d = x4;
  };
  T printf(void)
  {
    return Max(Max(a, b), Max(c, d));
  }
};
int main()
{
  Max4<char> C('W', 'w', 'a', 'A');
  cout << C.printf() << endl;
  Max4<int> I(-25, -67, -66, -256);
  cout << I.printf() << endl;
  Max4<double> D(1.25, 4.3, -8.6, 3.5);
  cout << D.printf() << endl;
  return 0;
}
