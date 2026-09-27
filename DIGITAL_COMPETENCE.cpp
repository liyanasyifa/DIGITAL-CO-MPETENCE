#include <iostream>
using namespace std;

int main()
{
    // ==========================================
    // YANA'S PART
    // Main Menu + Mood Selection + Genre Selection
    // ==========================================

    int moodChoice;
    int genreChoice;

    // -----------------------------
    // MAIN MENU
    // -----------------------------
    cout << "====================================" << endl;
    cout << "     SPOTIFY MUSIC RECOMMENDER" << endl;
    cout << "====================================" << endl;
    cout << "1. Choose Mood and Genre" << endl;
    cout << "2. Exit" << endl;
    cout << "Enter your choice: ";
    cin >> moodChoice;

    // Validate main menu choice
    while (moodChoice < 1 || moodChoice > 2)
    {
        cout << "Invalid choice. Please enter 1 or 2: ";
        cin >> moodChoice;
    }

    // Exit program
    if (moodChoice == 2)
    {
        cout << "Thank you for using Spotify Music Recommender!" << endl;
        return 0;
    }

    // -----------------------------
    // MOOD SELECTION
    // -----------------------------
    cout << endl;
    cout << "Choose your mood:" << endl;
    cout << "1. Happy" << endl;
    cout << "2. Sad" << endl;
    cout << "3. Chill" << endl;
    cout << "4. Energetic" << endl;
    cout << "Enter your choice: ";
    cin >> moodChoice;

    // Validate mood choice
    while (moodChoice < 1 || moodChoice > 4)
    {
        cout << "Invalid choice. Please enter a number from 1 to 4: ";
        cin >> moodChoice;
    }

    // -----------------------------
    // GENRE SELECTION
    // -----------------------------
    cout << endl;
    cout << "Choose your genre:" << endl;
    cout << "1. Pop" << endl;
    cout << "2. K-Pop" << endl;
    cout << "3. R&B" << endl;
    cout << "4. Rock" << endl;
    cout << "Enter your choice: ";
    cin >> genreChoice;

    // Validate genre choice
    while (genreChoice < 1 || genreChoice > 4)
    {
        cout << "Invalid choice. Please enter a number from 1 to 4: ";
        cin >> genreChoice;
    }

    // -----------------------------
    // STORE SELECTED MOOD AND GENRE
    // -----------------------------
    string mood;
    string genre;

    switch (moodChoice)
    {
        case 1:
            mood = "Happy";
            break;

        case 2:
            mood = "Sad";
            break;

        case 3:
            mood = "Chill";
            break;

        case 4:
            mood = "Energetic";
            break;
    }

    switch (genreChoice)
    {
        case 1:
            genre = "Pop";
            break;

        case 2:
            genre = "K-Pop";
            break;

        case 3:
            genre = "R&B";
            break;

        case 4:
            genre = "Rock";
            break;
    }

    // Display selected choices
    cout << endl;
    cout << "You selected:" << endl;
    cout << "Mood  : " << mood << endl;
    cout << "Genre : " << genre << endl;


    return 0;
}