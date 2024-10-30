#include <iostream>
#include <array>
#include "debugging.h"
using namespace std;

array<array<int, 5>, 6> test_cases = {{
    {100, 5, 2, 20, 65},
    {200, 10, 1, 25, 185},
    {0, 0, 0, 0, 0},
    {1, 1, 1, 1, 1},
    {100, 2, 3, 1, 99},
    {2500, 3, 2, 2, 2499},
}};


bool test(int input1, int input2, int input3, int input4, int expected_output) {
    cout << "---------------------------------" << endl;
    cout << "Inputs: " << input1 << ", " << input2 << ", " << input3 << ", " << input4 << endl;
    cout << "Expecting: " << expected_output << endl;
    int result = take_magic_damage(input1, input2, input3, input4);
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
    for (array<int, 5> test_case : test_cases) {
        bool correct = test(test_case[0], test_case[1], test_case[2], test_case[3], test_case[4]);
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

