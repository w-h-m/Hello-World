#include <iostream>   //标准输入输出流，in：输入 out：输出
using namespace std;  //使用命名空间std，例如cout就是属于std的

//函数入口地址
int main() {
  // << 原本是左移运算符，这里是运算符的重载
  // << 用于拼接
  // endl：end line
  cout << "hello,world" << 123456 << endl;
  // EXIT_SUCCESS 宏定义
  return EXIT_SUCCESS;
}