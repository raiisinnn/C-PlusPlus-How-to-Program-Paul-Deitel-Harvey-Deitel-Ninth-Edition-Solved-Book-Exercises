/*
C++ Social Network Simulation

This program simulates a simple social network where users can:
- Register or log in
- Send and accept friend requests
- View their friends
- Log out

It supports up to 25 users and uses 2D boolean arrays to track friend relationships and friend requests.
*/
/*
LONGER FORMAT OF THE EXERCISE:
Write a program that simulates a social network.

When the program starts, it should display the message:
“Welcome to the CPLUSPLUS social network!”

Then it should show Menu 1, which contains the following options:
1: Log in
2: Register
3: Exit the program

If the user enters 1, the program should display Menu 2.
In this menu, the program should ask the user to enter their name (a string).
If the user is trying to log in, the program should check whether the name exists in the list of registered members.
If the user is trying to register and the name already exists, the program should ask for a new name.

Next, the program should ask the user to enter a password (a string).
If the user is logging in, the program should check whether the password is correct.
If the user is registering, the password must be at least six characters long.

After the login or registration is completed successfully, the program should display the message:
“Successful login”
and move to Menu 3.

Menu 3 should have the following options:
1: View Requests
2: View Friends
3: Add Friend
4: Remove Friend
5: Log Out

If the user selects 1, the program should display the message:
“You chose 1: View Requests”
and then show Menu 3 again.
The same process should occur if the user selects 2 (“View Friends”).

If the user selects 3 or 4, the program should display Menu 4.
In this menu, the program should ask the user to enter the name of the friend they want to add or remove.
It should then check whether the name exists in the friends list and display an appropriate message, such as:
“Request sent” or “Friend removed.”

If the user enters a number that is not between 1 and 5, the program should keep asking for a valid number until one within that range is entered.

If the user chooses 5, the program should log them out and return to Menu 1, displaying the same three options again:
1: Log in
2: Register
3: Exit program

If the user selects 2 in Menu 1, the program should once again display Menu 2, allowing registration, and after successful registration it should display:
“Registration successful!”
Then it should return to Menu 1.

If the user selects 3 in Menu 1, the program should terminate.

Additionally, the program must include the feature for adding friends using friend requests, and these friend requests should be shown in the corresponding menu when viewed.

*/

#include <iostream>
#include <string>
using namespace std;

const int totusers = 25; // maximum number of users
string users[totusers];  // stores usernames
int userCount = 0;       // number of registered users

bool friendRequests[totusers][totusers] = {false}; // friend request tracking
bool friends[totusers][totusers] = {false};        // friendship tracking

int currentUser = -1; // index of currently logged-in user (-1 means no one logged in)

// Function declarations
void menu1();
void menu3();

// Find index of a username in the users array
int userIndex(const string &username) {
    for (int i = 0; i < userCount; i++) {
        if (users[i] == username)
            return i;
    }
    return -1; // user not found
}

// ---------------- LOGIN ----------------
void login() {
    string username, password;
    cout << "Vendosni emrin ose username-in: ";
    cin >> username;
    cout << "Vendosni passwordin e account-it: ";
    cin >> password;

    int index = userIndex(username);
    if (index != -1) {
        currentUser = index;
        cout << "Hyrje e suksesshme!" << endl;
        menu3();
    } else {
        cout << "User-i nuk u gjet. Ju lutemi regjistrohuni nese nuk keni nje account." << endl;
    }
}

// ---------------- REGISTER ----------------
void registerUser() {
    string username, password;

    if (userCount >= totusers) {
        cout << "ERROR! Limiti i perdoruesve eshte arritur, nuk mund te regjistroheni me." << endl;
        return;
    }

    cout << "Vendosni emrin ose username-in: ";
    cin >> username;
    cout << "Vendosni passwordin e account-it (min 6 karaktere): ";
    cin >> password;

    if (password.length() < 6) {
        cout << "Passwordi duhet te jete te pakten 6 karaktere!" << endl;
        return;
    }

    if (userIndex(username) == -1) {
        users[userCount] = username;
        currentUser = userCount++;
        cout << "Regjistrimi ne rrjetin social CPLUSPLUS u krye me sukses!" << endl;
        menu3();
    } else {
        cout << "Nje user me kete emer ekziston!" << endl;
    }
}

// ---------------- SEND FRIEND REQUEST ----------------
void friendRequest() {
    string friendName;
    cout << "Vendosni emrin e personit qe doni te shtoni si mik: ";
    cin >> friendName;

    int friendIndex = userIndex(friendName);

    if (friendIndex != -1 && currentUser != -1 &&
        !friends[currentUser][friendIndex] &&
        !friendRequests[currentUser][friendIndex]) {

        friendRequests[currentUser][friendIndex] = true;
        cout << "Friend request-i u dergua tek " << friendName << "!" << endl;
    } else {
        cout << "Error! User-i nuk u gjet, ose jeni tashme miq, ose keni derguar nje request me pare." << endl;
    }
}

// ---------------- VIEW FRIEND REQUESTS ----------------
void viewFriendRequests() {
    cout << "Friend requests qe keni marre:" << endl;
    bool found = false;

    for (int i = 0; i < userCount; i++) {
        if (friendRequests[i][currentUser]) {
            cout << users[i] << endl;
            found = true;
        }
    }

    if (!found)
        cout << "Nuk ka friend requests." << endl;
}

// ---------------- ACCEPT FRIEND REQUEST ----------------
void acceptFriendRequest() {
    string friendName;
    cout << "Per te pranuar nje friend request, vendosni emrin e derguesit: ";
    cin >> friendName;

    int friendIndex = userIndex(friendName);

    if (friendIndex != -1 && friendRequests[friendIndex][currentUser]) {
        friends[currentUser][friendIndex] = true;
        friends[friendIndex][currentUser] = true;
        friendRequests[friendIndex][currentUser] = false; // mark request as processed
        cout << "Tani ju dhe " << friendName << " jeni miq!" << endl;
    } else {
        cout << "Nuk ka nje friend request te tille." << endl;
    }
}

// ---------------- VIEW FRIENDS ----------------
void viewFriends() {
    cout << "Miqte tuaj:" << endl;
    bool found = false;

    for (int i = 0; i < userCount; i++) {
        if (friends[currentUser][i]) {
            cout << users[i] << endl;
            found = true;
        }
    }

    if (!found)
        cout << "Ju nuk keni asnje mik." << endl;
}

// ---------------- LOG OUT ----------------
void logout() {
    currentUser = -1;
    cout << "U shkyçët me sukses." << endl;
}

// ---------------- MENU 1 ----------------
void menu1() {
    cout << "\nMiresevini ne rrjetin social CPLUSPLUS!" << endl;
    cout << "MENU 1:" << endl;
    cout << "1: Hyj ne llogari" << endl;
    cout << "2: Regjistrohu" << endl;
    cout << "3: Dil nga programi" << endl;
}

// ---------------- MENU 3 ----------------
void menu3() {
    int choice;
    do {
        cout << "\nMENU 3:" << endl;
        cout << "1: Shih Kerkesat" << endl;
        cout << "2: Shih Miqte" << endl;
        cout << "3: Shto Mik" << endl;
        cout << "4: Prano Kerkese" << endl;
        cout << "5: Dil nga llogaria" << endl;
        cout << "Zgjedhja juaj: ";
        cin >> choice;

        switch (choice) {
            case 1: viewFriendRequests(); break;
            case 2: viewFriends(); break;
            case 3: friendRequest(); break;
            case 4: acceptFriendRequest(); break;
            case 5: logout(); break;
            default: cout << "Zgjedhje e pavlefshme. Provo perseri." << endl;
        }
    } while (choice != 5);
}

// ---------------- MAIN ----------------
int main() {
    int choice;
    do {
        menu1();
        cout << "Zgjedhja juaj: ";
        cin >> choice;

        switch (choice) {
            case 1: login(); break;
            case 2: registerUser(); break;
            case 3:
                cout << "-------- Faleminderit qe zgjodhet te perdorni rrjetin social CPLUSPLUS --------" << endl;
                return 0;
            default:
                cout << "Zgjedhje e pavlefshme. Provo perseri." << endl;
        }
    } while (choice != 3);

    return 0;
}
