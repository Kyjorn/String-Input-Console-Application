#include <iostream>
using namespace std;

int main () {

    //Variables
    string string1;
    string string2;
    string combo;

    //loop to ask user 3 times for string input
    for (int i = 1; i <= 3; i++) {
        
        //gets first string
        cout << "Enter a string: ";
        getline(cin, string1);

        //gets second string
        cout << "Enter another string: ";
        getline(cin, string2);

        //concatenates the two strings
        combo = string1 + " " + string2;

        //prints the concatenated string with a new line
        cout << "Iteration " << i << " combined: " << combo << endl;
        cout<< "----------------------" << endl;
    }

    return 0;    
}