#include <iostream>
using namespace std;
void swap(int p1, int p2)
{
  int temp = p1;
  p1 = p2;
  p2 = temp;
  cout << "swap:p1=" << p1 << ",p2=" << p2 << endl; //index1
};
void swap2(int *p1, int *p2)
{
  int temp = *p1;
  *p1 = *p2;
  *p2 = temp;
  cout << "swap2: *p1=" << *p1 << ",*p2=" << *p2 << endl; //index3
};
int main()
{
  int a, b;
  cout << "input a,b value:" << endl;
  cin >> a >> b;
  swap(a, b);
  cout << "a=" << a << ",b=" << b << endl; //index2
  swap2(&a, &b);
  cout << "a=" << a << ",b=" << b << endl; //index4
  return 0;
}
/**
 * swap并没有修改a,b的值，而是修改的p1，p2的值
 * swap2直接改了a,b的值，因为传的内存地址，直接改了a,b内存的内容
 * 
*/
