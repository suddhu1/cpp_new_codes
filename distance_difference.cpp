#include <iostream>
using namespace std;
class Distance {
private:
    int feet;
    int inch;
public:
    Distance(int f, int i) : feet(f), inch(i) {}
    Distance difference(const Distance& d) const {
        int totalInch1 = feet * 12 + inch;
        int totalInch2 = d.feet * 12 + d.inch;

        int diffInch = totalInch1 - totalInch2;

        int resultFeet = diffInch / 12;
        int resultInch = diffInch % 12;

        return Distance(resultFeet, resultInch);
    }
    void display() const {
        cout << "Distance: " << feet << " feet, " << inch << " inches" << endl;
    }
};

int main() {
    Distance d1(5, 8);
    Distance d2(3, 10);
    Distance result = d1.difference(d2);
    cout << "\nDifference:" << endl;
    result.display();
    return 0;
}
