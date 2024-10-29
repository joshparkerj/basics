#include <iostream>
#include <string>
using namespace std;

int main() {
    string sentence_start = "You have ";
    string sentence_end = " health";
    string player1_health = "1200";
    string player2_health = "1100";

    // Don't edit above this line

    cout << sentence_start + player1_health + sentence_end << endl;
    cout << sentence_start + player2_health + sentence_end << endl;
}

