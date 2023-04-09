#include <iostream>

using namespace std;


int main() {
string x = "sombrero";
string y = "cacerola";
string z = x;

cout << x << endl;

cout << y << endl;
x = y, y = z;
cout << x << endl;

cout << y << endl;
}
