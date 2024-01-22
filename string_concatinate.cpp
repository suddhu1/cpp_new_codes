#include <iostream>
#include <cstring>
using namespace std;
class MyString {
private:
    char* str;

public:
    MyString(const char* s) {
        str = new char[strlen(s) + 1];
        strcpy(str, s);
    }
    ~MyString() {
        delete[] str;
    }
    MyString operator+(const MyString& other) const {
        char* resultStr = new char[strlen(str) + strlen(other.str) + 1];
        strcpy(resultStr, str);
        strcat(resultStr, other.str);

        MyString result(resultStr);
        delete[] resultStr;

        return result;
    }
    void display() const {
        cout << "String: " << str << endl;
    }
};

int main() {

    MyString str1("aayush, ");
    MyString str2("pandey");
    MyString result = str1 + str2;
    cout << "\nConcatenated Result:" << endl;
    result.display();
    return 0;
}





