#include <iostream>
#include <array>
#include "unit-tests.h"
using namespace std;

array<array<int, 3>, 6> test_cases = {{
    {1, 200, 300},
    {2, 50, 250},
    {0, 0, 0},
    {0, 200, 200},
    {176, 350, 17950},
    {250, 100, 25100}
}};

bool test(int input1, int input2, int expected_output) {
    cout << "---------------------------------" << endl;
    cout << "Inputs: " << input1 << ", " << input2 << endl;
    cout << "Expecting: " << expected_output << endl;
    int result = total_xp(input1, input2);
    cout << "Actual: " << result << endl;
    if (result == expected_output) {
        cout << "Pass" << endl;
        return true;
    }

    cout << "Fail" << endl;
    return false;
}


int main() {
    int passed = 0;
    int failed = 0;
    for (array<int, 3> test_case : test_cases) {
        bool correct = test(test_case[0], test_case[1], test_case[2]);
        if (correct)
            passed += 1;
        else
            failed += 1;
    }

    if (failed == 0)
        cout << "============= PASS ==============" << endl;
    else
        cout << "============= FAIL ==============" << endl;
    cout << passed << " passed, " << failed << " failed" << endl;
}

