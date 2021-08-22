#include <iostream>
#include <string>
using namespace std;
int main(int argc, char const *argv[]) 
{
    string list[] = { "홍길동", "고길동", "둘리" } ;

    //for 1번
    for(auto& name: list) { // 참조 변수 ---주소 참조 작업만 발생
    cout << name << endl;
    }

    //for 2번
    for(auto name: list) { // 복사 list의 각 요소를 name 변수로 복사
    cout << name << endl;
    }

    return 0;
}
