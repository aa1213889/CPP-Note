#include <iostream>
using namespace std;
class Parent
{
public:
  Parent()
  {
    cout << "Parent::Parent() called. \n";
  }
  ~Parent()
  {
    cout << "Parent::~Parent() called. \n";
  }
};
class Child : public Parent
{
private:
  char *buf;

public:
  Child(int i)
  {
    cout << "Child::Child() called. \n";
    buf = new char[i];
  }
  virtual ~Child()
  {
    delete buf;
    cout << "Child::~Child() called. \n";
  }
};
void disp(Parent *a)
{
  delete a;
}
int main()
{
  Parent *a = new Child(20);
  disp(a);
  return 0;
}