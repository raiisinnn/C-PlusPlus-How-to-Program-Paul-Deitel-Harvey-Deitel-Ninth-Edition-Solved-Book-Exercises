/*
Write a program where the computer fills an array with 7 random numbers from 1 to 13.
Each number represents a card in a poker game:
1 = A, 2–10 = numeric cards, 11 = J, 12 = Q, 13 = K.

Rules:
- Do not allow more than 4 identical cards (simulating 4 suits).
- The program should simulate 1000 hands (each with 7 random cards).
- For each hand, print the cards drawn.
- On the right, display the message "Has a straight" if the hand contains
  5 or more consecutive cards (e.g. 10, 11, 12, 13, 1 is also a straight).
- Display which cards form the straight when it’s found.
*/

#include <iostream>
#include <iomanip>
#include <ctime>
#include <cstdlib>
using namespace std;

int main() {
    const int HAND_SIZE = 7;
    const int FREQ_SIZE = 15; // extra index for circular ace (1 == 14)

    srand(time(0));

    int cards[HAND_SIZE];
    int freq[FREQ_SIZE];
    int streakCount;

    // Simulate 1000 poker hands
    for (int hand = 1; hand <= 1000; hand++) {
        // Reset frequencies
        for (int i = 0; i < FREQ_SIZE; i++)
            freq[i] = 0;

        // Draw 7 random cards (1–13)
        for (int i = 0; i < HAND_SIZE; i++) {
            int card;
            do {
                card = 1 + rand() % 13; // random between 1 and 13
            } while (freq[card] >= 4);  // don’t allow more than 4 of the same card

            cards[i] = card;
            freq[card]++;
        }

        // Display the hand
        cout << "Hand " << setw(3) << hand << ": ";
        for (int i = 0; i < HAND_SIZE; i++)
            cout << cards[i] << " ";
        cout << endl;

        // Treat Ace (1) also as 14 for circular straight
        freq[14] = freq[1];

        // Check for 5+ consecutive numbers (a straight)
        streakCount = 0;
        for (int j = 1; j < FREQ_SIZE; j++) {
            if (freq[j] > 0) {
                streakCount++;
                if (streakCount == 5) {
                    cout << "   → Has a straight: ";
                    int start = j - 4;
                    while (freq[start] > 0 && start < FREQ_SIZE) {
                        cout << (start > 13 ? start - 13 : start) << " ";
                        start++;
                    }
                    cout << endl;
                    break;
                }
            } else {
                streakCount = 0;
            }
        }

        cout << endl;
    }

    system("pause");
    return 0;
}
