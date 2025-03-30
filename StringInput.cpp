#include <iostream>
using namespace std;

int main () {

    //Variables
    string string1;
    string string2;
    string combo;

    //loop to ask user 3 times for string input
    for (int i = 1; i <= 3; i++) {
        
        cout << "Enter a string: ";     //gets first string
        getline(cin, string1);

        cout << "Enter another string: "; //gets second string
        getline(cin, string2);

        combo = string1 + string2;      //concatenates the two strings

        cout << combo << endl;          //prints the concatenated string with a new line
    }

    return 0;    
}