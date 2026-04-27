#include <iostream>
using namespace std;

int main() {
    int choice;

    cout << "🏝️ Welcome to THE LOST TEMPLE ADVENTURE!\n";
    cout << "You are an explorer searching for a legendary treasure.\n";
    cout << "You arrive at a mysterious jungle...\n\n";

    // FIRST BRANCH
    while (true) {
        cout << "Do you:\n";
        cout << "1. Enter the dark cave 🕳️\n";
        cout << "2. Follow the river 🌊\n";
        cout << "Enter choice (1 or 2): ";
        cin >> choice;

        if (choice == 1 || choice == 2) break;
        cout << "Invalid choice. Try again.\n\n";
    }

    if (choice == 1) {
        // CAVE PATH
        cout << "\nYou enter the cave... it's cold and silent.\n";

        while (true) {
            cout << "Inside, you see:\n";
            cout << "1. A glowing chest ✨\n";
            cout << "2. A narrow tunnel 🌀\n";
            cout << "Enter choice: ";
            cin >> choice;

            if (choice == 1 || choice == 2) break;
            cout << "Invalid choice. Try again.\n\n";
        }

        if (choice == 1) {
            // CHEST PATH
            cout << "\nYou open the chest...\n";
            cout << "💥 It's a trap! Poison gas fills the cave.\n";
            cout << "☠️ GAME OVER - You chose greed.\n";
            return 0;

        } else {
            // TUNNEL PATH
            cout << "\nYou crawl through the tunnel...\n";
            cout << "You find a hidden temple room!\n";

            while (true) {
                cout << "In the room:\n";
                cout << "1. Take the golden idol 🏆\n";
                cout << "2. Leave it and exit safely 🚪\n";
                cout << "Enter choice: ";
                cin >> choice;

                if (choice == 1 || choice == 2) break;
                cout << "Invalid choice. Try again.\n\n";
            }

            if (choice == 1) {
                cout << "\nThe temple shakes!\n";
                cout << "You barely escape with the treasure!\n";
                cout << "🏆 SUCCESS ENDING: You became rich!\n";
            } else {
                cout << "\nYou leave safely but empty-handed.\n";
                cout << "🙂 NEUTRAL ENDING: You survived.\n";
            }
        }

    } else {
        // RIVER PATH
        cout << "\nYou follow the river...\n";
        cout << "You encounter a hungry crocodile! 🐊\n";

        int attempts = 3;
        bool escaped = false;

        // LOOP WITH LIMITED ATTEMPTS
        for (int i = 0; i < attempts; i++) {
            cout << "\nWhat do you do?\n";
            cout << "1. Fight ⚔️\n";
            cout << "2. Run 🏃\n";
            cout << "Enter choice: ";
            cin >> choice;

            if (choice == 2) {
                escaped = true;
                break;
            } else if (choice == 1) {
                cout << "Bad idea! Try again...\n";
            } else {
                cout << "Invalid choice.\n";
                i--; // doesn't count as attempt
            }
        }

        if (!escaped) {
            cout << "\nThe crocodile attacks...\n";
            cout << "☠️ GAME OVER - You were eaten.\n";
            return 0;
        }

        cout << "\nYou escaped safely!\n";
        cout << "You discover a hidden village.\n";

        while (true) {
            cout << "Do you:\n";
            cout << "1. Stay in the village 🏡\n";
            cout << "2. Continue searching for treasure 🧭\n";
            cout << "Enter choice: ";
            cin >> choice;

            if (choice == 1 || choice == 2) break;
            cout << "Invalid choice. Try again.\n\n";
        }

        if (choice == 1) {
            cout << "\nYou live peacefully with villagers.\n";
            cout << "🌿 PEACEFUL ENDING: A simple happy life.\n";
        } else {
            cout << "\nYou get lost deeper in the jungle...\n";
            cout << "☠️ BAD ENDING: Never seen again.\n";
        }
    }

    cout << "\n🎮 Thanks for playing!\n";
    return 0;
}