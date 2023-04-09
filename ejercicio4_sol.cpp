#include <iostream>
#include <locale.h>

using namespace std;

int main() {
	setlocale(LC_CTYPE, "Spanish");
 	
	string robot_name="RC-21\\\\M2";
 	string robot_status=" El robot \"RC-21\\\\M2\" se está incendiando.";
 	cout<<"el robot "<<robot_name<<" tiene un mensaje"<<endl;
 	cout<<robot_status<<endl;
 	
}