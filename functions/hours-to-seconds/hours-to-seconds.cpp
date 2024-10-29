#include <iostream>
using namespace std;

int hours_to_seconds(int hours) {
    return (
        hours
        * 60 // minutes in an hour
        * 60 // seconds in a minute
    );
}


// Don't touch below this line

void test(int hours) {
    int secs = hours_to_seconds(hours);
    cout << hours << " hours is " << secs << " seconds" << endl;
}

int main() {
    test(10);
    test(1);
    test(25);
    test(100);
    test(33);
}

