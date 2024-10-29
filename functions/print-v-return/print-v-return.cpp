#include <iostream>
#include <string>
using namespace std;

string get_title(string first_name, string last_name, string job) {
    string title = first_name + " " + last_name + " the " + job;
    return (title);
}

// Don't touch below this line

void test(string first_name, string last_name, string job) {
    string title = get_title(first_name, last_name, job);
    cout << "First name: " << first_name << endl;
    cout << "Last name: " << last_name << endl;
    cout << "Job: " << job << endl;
    cout << "Title: " << title << endl;
    cout << "=====================================" << endl;
}

int main() {
    test("Frodo", "Baggins", "warrior");
    test("Bilbo", "Baggins", "thief");
    test("Gandalf", "The Grey", "wizard");
    test("Aragorn", "Son of Arathorn", "ranger");
}

