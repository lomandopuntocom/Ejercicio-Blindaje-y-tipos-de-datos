#include <iostream>
#include <locale.h>
using namespace std;
int main() {
	setlocale(LC_CTYPE, "Spanish");
	string name = "Wolfgang";
	int age = 10, birth_year = 1756;
	cout<<name<<" cumplirá "<<age<<" años en "<<birth_year+age<<endl;
}