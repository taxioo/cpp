#include <iostream>
#include <string>
using namespace std;

int main(int argc, char const*argv[]) 
{
    int x = 100;
    x++; // x 는 11
    cout << x << endl;
    cout << " " << endl;

    x--;
    cout << x << endl;
    cout << " " << endl;

    cout << ++x << endl; // ++x : x값을 읽기전에 증가
    cout << x++ << endl; // x++ : x값을 먼저 읽고 난 후 증가
    cout << x << endl;
    cout << --x << endl;
    cout << x-- << endl;
    cout << x << endl; 
    return 0; 
}