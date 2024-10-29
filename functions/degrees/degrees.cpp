#include <iostream>
#include <cmath>
using namespace std;

double to_celsius(int f) {
    double c = 5.0/9.0 * (f - 32);
    return c;
}

//  Don't touch below this line

void test(int f) {
    double c = round(to_celsius(f) * 100.0) / 100.0;
    cout << f << " degrees fahrenheit is " << c << " degrees celsius" << endl;
}

int main() {
    test(100);
    test(88);
    test(104);
    test(112);
}
