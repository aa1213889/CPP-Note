/*1.2.3动态分配内存*/
#include <iostream>
using namespace std;
void main()
{
  double *p;
  p = new double[3];
  for (int i = 0; i < 3; i++)
  {
    cin >> *(p + i);
  }
  for (int i = 0; i < 3; i++)
  {
    cout << *(p + i) << " ";
  }
  delete p;
}