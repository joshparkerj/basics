#include <iostream>
#include <string>
#include <boost/format.hpp>
using namespace std;
using namespace boost;

int main() {
    string name = "Yarl";
    int age = 37;
    string race = "dwarf";

    // Don't edit above this line

    string msg = str(format("%1% is a %2% who is %3% years old.") % name % race % age);
    cout << msg << endl;
}

