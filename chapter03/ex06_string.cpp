//python string 불변직체 -> 원본 수정x
//c++ string 변경가능
//s.empty() 지우기
#include <iostream>
#include <string>
using namespace std;

int main(int argc, char const *argv[]) 
{
 string s1 = "Slow", s2 ="steady";
 string s3 = "the race.";
 string s4;
 s4 = s1 + " and " + s2 + " wins " + s3;
 cout << s4 << endl;
 return 0;
}
