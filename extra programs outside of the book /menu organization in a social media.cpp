/*
Organization of Menus in a Social Network

Write a program that displays the menus of a social network as follows:

Welcome to the CPLUSPLUS social network!
MENU 1:
Press:
  1: Log in
  2: Register
  3: Exit program

If the user enters 1, display MENU 2:

MENU 2:
Enter username (read a string)
Enter password (read a string)
Then display:
Successful login
and proceed to MENU 3.

MENU 3:
  1: View Requests
  2: View Friends
  3: Add Friend
  4: Remove Friend
  5: Log Out

If the user enters 1 → show:
"You chose 1: View Requests" then show MENU 3 again.
If the user enters 2 → show:
"You chose 2: View Friends" then show MENU 3 again.
If the user chooses 3 or 4 → show MENU 4.

MENU 4:
Enter the friend's name to add/remove (read a string)
Display:
"Request sent" / "Friend removed"

If the user enters a value other than 1–5, read a new number until it’s valid.
If the user chooses 5, return to MENU 1.

If the user chooses 2 in MENU 1 → show MENU 2 again and then:
"Registration successful!" and return to MENU 1.
If the user chooses 3 → the program ends.
*/

#include <iostream>
#include <string>
using namespace std;

void menu1();
void menu2();
void menu3();
void menu4_add();
void menu4_remove();

// MENU 1
void menu1() {
    cout << "Welcome to the CPLUSPLUS social network!" << endl;
    cout << "MENU 1:" << endl;
    cout << "1: Log in" << endl;
    cout << "2: Register" << endl;
    cout << "3: Exit program" << endl;
}

// MENU 2
void menu2() {
    string username, password;

    cout << "MENU 2:" << endl;
    cout << "Enter username: ";
    cin.ignore();
    getline(cin, username);
    cout << "Enter password: ";
    getline(cin, password);
    cout << "Successful login!" << endl;

    menu3();
}

// MENU 3
void menu3() {
    int choice;
    do {
        cout << "\nMENU 3:" << endl;
        cout << "1: View Requests" << endl;
        cout << "2: View Friends" << endl;
        cout << "3: Add Friend" << endl;
        cout << "4: Remove Friend" << endl;
        cout << "5: Log Out" << endl;
        cout << "Your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "You chose: View Requests" << endl;
                break;
            case 2:
                cout << "You chose: View Friends" << endl;
                break;
            case 3:
                menu4_add();
                break;
            case 4:
                menu4_remove();
                break;
            case 5:
                cout << "Logging out..." << endl;
                break;
            default:
                cout << "Invalid choice. Try again." << endl;
        }
    } while (choice != 5);
}

// MENU 4 — Add Friend
void menu4_add() {
    string friendName;

    cout << "MENU 4:" << endl;
    cin.ignore();
    cout << "Enter the name of the friend to add: ";
    getline(cin, friendName);
    cout << "Request sent!" << endl;
}

// MENU 4 — Remove Friend
void menu4_remove() {
    string friendName;

    cout << "MENU 4:" << endl;
    cin.ignore();
    cout << "Enter the name of the friend to remove: ";
    getline(cin, friendName);
    cout << "Friend removed!" << endl;
}

// MAIN PROGRAM
int main() {
    int choice;
    do {
        menu1();
        cout << "Your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                menu2();
                break;
            case 2:
                menu2();
                cout << "Registration successful!" << endl;
                break;
            case 3:
                cout << "-------- Thank you for using the CPLUSPLUS social network! --------" << endl;
                break;
            default:
                cout << "Invalid choice. Try again." << endl;
        }
    } while (choice != 3);

    return 0;
}
