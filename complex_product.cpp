#include <iostream>
using namespace std;
class Complex {
private:
    int real,img;
public:
    Complex(int r, int i) : real(r), img(i) {}

    Complex operator*(const Complex& other) const {
        int resultReal = (real * other.real) - (img * other.img);
        int resultimg = (real * other.img) + (img * other.real);
        return Complex(resultReal, resultimg);
    }

    void display() const {
       cout << "Complex number: " << real << " + " << img << "i" <<  endl;
    }
};

int main() {
    Complex complex1(2.0, 3.0);
    Complex complex2(1.0, -2.0);
    Complex result = complex1 * complex2;
    cout << "\nResult of multiplication:" <<   endl;
    result.display();

    return 0;
}
