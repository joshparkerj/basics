#include <iostream>
#include <tuple>
#include <string>
using namespace std;

tuple<string, int> become_warrior(string first_name, string last_name, int power) {
    return {
        first_name + " " + last_name  + " the warrior",
        power + 1
    };
}

// Don't edit below this line

void test(string input1, string input2, int input3) {
    string result1;
    int result2;
    tie(result1, result2) = become_warrior(input1, input2, input3);
    cout << result1 << " has a power level of: " <<  result2 << endl;
}

void multiple_return_values() {
    test("Frodo", "Baggins", 5);
    test("Bilbo", "Baggins", 10);
    test("Gandalf", "The Grey", 9000);
}

int main() {
    multiple_return_values();
}

