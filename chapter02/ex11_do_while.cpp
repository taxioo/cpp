#include <iostream>
using namespace std;

int main(int argc, char const *argv[]) 
{ 
    string str;
    do 
    {
        cout<<"문자열을 입력하세요:";
        getline(cin, str);
        cout << "사용자의 입력: " << str << endl;
    }
    while(str != "exit");
    
    return 0; 
}