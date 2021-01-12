#include <iostream>   //包含头文件
using namespace std;  //4
int result(int, int); //函数result声明
const int k = 2;      //定义全局常量
struct Point          //定义结构体Point
{
  int x, y;
};

int main() //主函数
{
  system("chcp 65001"); //utf-8
  int z = 0, b = 50;
  cout << z + "," + b;
  Point p;
  cout << "输入两个整数(以空格区分)：";
  cin >> p.x >> p.y;
  z = (p.x + p.y) * k;
  z = result(z, b);
  cout << "计算结果如下:" << endl;
  cout << "((" << p.x << "+" << p.y << ")*" << k << ")+" << b << "=" << z << endl;
  return 0;
}
//我是注释 我是注释 我是注释
/*
 我是注释 我是注释 我是注释
*/
int result(int a, int b) //函数result
{
  return a + b;
}