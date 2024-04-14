//Function max for everyone. Part 1
#include <iostream>
#include <string>
using namespace std;
template <typename T>
T custom_max(T a, T s){
    return (a > s) ? a : s; //if (a>s) cout << a; else cout << s
}
int main(){
    string type = "";
    cin >> type;
    if (type == "INT"){
        int value1 = 0, value2 = 0;
        cin >> value1 >> value2;
        cout << custom_max(value1, value2);
    } else if (type == "DOUBLE"){
        double value1 = 0, value2 = 0;
        cin >> value1 >> value2;
        cout << custom_max(value1, value2);
    } else if (type == "STRING"){
        string word1 = "", word2 = "";
        cin >> word1 >> word2;
        cout << custom_max(word1, word2);
    }
    return 0;
}
