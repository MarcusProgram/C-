//А тестовый print забыл про массивы...
#include <iostream>
#include <string>
#include <vector>
using namespace std;
template <typename T>
void print(T a){
    cout <<  "Value is "  << a;
}

template <>
void print<vector <int>>(vector<int> a){
  cout << "Values are ";
  for (int i = 0; i < a.size(); i++){
    cout << a[i] << " ";
  }
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
  else if (choice == "VECTOR"){
    int n,b;
    vector<int> a;
    cin >> n;
    for (int i = 0; i < n; i++){
      cin >> b;
      a.push_back(b);
    }
    print(a);
  }
	return 0;
}
