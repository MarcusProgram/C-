//Уникальный универсальный контейнер. Part 1

#include <iostream>
#include <vector>
#include <string>   
using namespace std;

 
template <typename T>
class UniqArray {
protected:
    vector<T> elements;

public:
    void add_elem(T new_elem) {
         {
            elements.push_back(new_elem);
        }
    }

    void show() {
        for (T elem : elements) {
            cout << elem << " ";
        }
    }
};


int main() {
    string type = "";
    cin >> type;
    if (type == "INT") {
        UniqArray<int> test_subject;
        string command;
        while (command != "EXIT") {
            cin >> command;
            if (command == "ADD") {
                int tmp_val = 0;
                cin >> tmp_val;
                test_subject.add_elem(tmp_val);
            }
            else if (command == "SHOW") {
                test_subject.show();
                cout << endl;
            }
        }
    }
    else if (type == "DOUBLE") {
        UniqArray<double> test_subject;
        string command;
        while (command != "EXIT") {
            cin >> command;
            if (command == "ADD") {
                double tmp_val = 0;
                cin >> tmp_val;
                test_subject.add_elem(tmp_val);
            }
            else if (command == "SHOW") {
                test_subject.show();
                cout << endl;
            }
        }
    }
    else if (type == "STRING") {
        UniqArray<string> test_subject;
        string command;
        while (command != "EXIT") {
            cin >> command;
            if (command == "ADD") {
                string tmp_val = "";
                cin >> tmp_val;
                test_subject.add_elem(tmp_val);
            }
            else if (command == "SHOW") {
                test_subject.show();
                cout << endl;
            }
        }
    }
    return 0;
}



//Примеры
//ВХОДНЫЕ ДАННЫЕ
INT
ADD 5
ADD 6
SHOW
EXIT
//ВЫХОДНЫЕ ДАННЫЕ
5 6 
