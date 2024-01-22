#include <iostream>
using namespace std;
class B; 

class A {


public:
    int a;
    A(int val) : a(val) {}
    friend void add(A obj, B objB);
};

class B {

public:
      int b;
    B(int val) : b(val) {}
    friend void add(A obj, B objB);
};
void add(A obj, B objB) {
    int sum = obj.a + objB.b;
    cout << "Sum of values: " << sum << endl;
}

int main() {
    A obj(5);
    B objB(10);
    add(obj, objB);

    return 0;
}
