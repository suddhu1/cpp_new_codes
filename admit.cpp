#include <iostream>
using namespace std;
class Admission {
    static int number;

public:
    static void admitOne() {
        number += 1;
    }
    friend void admitGroup();
    static void displayTotal() {
        cout << "Total number of students admitted: " << number << endl;
    }
};
int Admission::number = 0;
void admitGroup() {
    Admission::number += 5;
}

int main() {
    cout<<"sudarshan pathak"<<endl;
    Admission::admitOne();
    Admission::admitOne();
    admitGroup();
    admitGroup();
    Admission::displayTotal();
    return 0;
}

//