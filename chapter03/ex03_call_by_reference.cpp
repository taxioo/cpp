#include <iostream>
using namespace std;
void swap(int& x, int &y) //선언문에 변수명앞에 &붙은 경우 reference 변수가 됨
{
 int t;
 t = x;
 x = y;
 y = t;
}
int main(int argc, char const *argv[]) {
 int a = 100, b = 200;
 printf("a=%d, b=%d\n", a, b);
 swap(a, b);
 printf("a=%d, b=%d\n", a, b);
 return 0;
}