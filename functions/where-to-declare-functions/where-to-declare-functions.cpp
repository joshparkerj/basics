#include <iostream>
using namespace std;

void welcome() {
    // note that the function does not seem to be hoisted if declared after int main
    cout << "Fantasy Quest is booting up..." << endl;
    cout << "Game is running!" << endl;
}

int main() {
    welcome();
}

