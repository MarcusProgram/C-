// Тестовый print!
#include <iostream>
#include <string>
using namespace std;
template <typename T>
void print(T a){
    cout <<  "Value is "  << a;
}
int main() {
	string choice;
	cin >> choice;
	if (choice == "INT") {
		int a = 0;
		cin >> a;
		print(a);
	}
	else if (choice == "DOUBLE") {
		double a = 0;
		cin >> a;
		print(a);
	}
	else if (choice == "CHAR") {
		char a = 0;
		cin >> a;
		print(a);
	}
	else if (choice == "STRING") {
		string a = "";
		cin >> a;
		print(a);
	}
	return 0;
}
