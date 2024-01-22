#include <iostream>
#include <string>
using namespace std;
class Student {
public:
    string name;
    int age;
    float marks;
    void input() {
        cout << "Enter student details:" << endl;
        cout << "Name: ";
        cin >> name;
        cout << "Age: ";
        cin >> age;
        cout << "Marks: ";
        cin >> marks;
    }
   void display()
    {
        cout<<" konnichiwa sudarshan deus "<<endl;
        cout<<"hello I'am  sudarshan "<<endl;
    }
};

int main() {
    const int a = 10;
    Student students[a],s1;
    s1.display();
    for (int i = 0; i < a; ++i) {
        students[i].input();
    }
    int j = 0;
    for (int i = 1; i < a; ++i) {
        if (students[i].marks > students[j].marks) {
            j = i;
        }
    }
    cout << "\nStudent with the highest marks:" << endl;
    cout << "Name: " << students[j].name << endl;
    cout << "Age: " << students[j].age << endl;
    cout << "Marks: " << students[j].marks << endl;
    return 0;
}


