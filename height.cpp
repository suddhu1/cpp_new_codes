#include <iostream>
using namespace std;
class height {
    private:
        int feet;
        int inch;
public:
    height(int f, int i) {
        feet=f;
        inch=i;
       
    }
    ~height() {
        cout << "Destructor called." << endl;
    }
    height addHeights(height h) {
        height result(0, 0);
        result.feet = feet + h.feet;
        result.inch = inch + h.inch;

        if (result.inch >= 12) {
            result.feet += result.inch / 12;
            result.inch %= 12;
        }
        return result;
    }
    void display() {
        cout << "height: " << feet << " feet, " << inch << " inches" << endl;
    }
};

int main() {
    height h1(5, 8);
    height h2(3, 10);
    cout<<"Sudarshan Pathak"<<endl;
    height result = h1.addHeights(h2);
    cout << "Result after adding two heights:" << endl;
    result.display();
    return 0;
}
