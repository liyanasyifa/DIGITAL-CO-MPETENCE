#include <iostream>
#include <vector>
#include <string>
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
        cout << "Enter your choice: ";

        // Error Handling (Invalid Input)/Anis
        if (cin >> moodChoice) {
            if (menuChoice >= 1 && menuChoice <= 2) {
                break;
            }
            else {
                 cout << "Invalid choice. Please enter 1 or 2: ";
                 << endl;
            }
        }
        else {
            cout << "Invalid input. Please enter a number."
                 << endl;

            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
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
            genre = "R&B";
            break;

        case 3:
            genre = "K-Pop";
            break;

        case 4:
            genre = "Rock";
            break;
    }

    // -----------------------------
    // Anis's Part
    // SONG/PLAYLIST DATA
    // -----------------------------
    vector<string> recommendations;

    if (mood == "Happy" && genre == "Pop") {
        recommendations = {" Song 1", " Song 2", " Song 3"};
    } else if (mood == "Happy" && genre == "R&B") {
        recommendations = {" Song 1", " Song 2", " Song 3"};
    } else if (mood == "Happy" && genre == "K-Pop") {
        recommendations = {" Song 1", " Song 2", " Song 3"};
    } else if (mood == "Happy" && genre == "Rock") {
        recommendations = {" Song 1", " Song 2", " Song 3"};
    } else if (mood == "Sad" && genre == "Pop") {
        recommendations = {" Song 1", " Song 2", " Song 3"};
    } else if (mood == "Sad" && genre == "R&B") {
        recommendations = {" Song 1", " Song 2", " Song 3"};
    } else if (mood == "Sad" && genre == "K-Pop") {
        recommendations = {" Song 1", " Song 2", " Song 3"};
    } else if (mood == "Sad" && genre == "Rock") {
        recommendations = {" Song 1", " Song 2", " Song 3"};
    } else if (mood == "Chill" && genre == "Pop") {
        recommendations = {" Song 1", " Song 2", " Song 3"};
    } else if (mood == "Chill" && genre == "R&B") {
        recommendations = {" Song 1", " Song 2", " Song 3"};
    } else if (mood == "Chill" && genre == "K-Pop") {
        recommendations = {" Song 1", " Song 2", " Song 3"};
    } else if (mood == "Chill" && genre == "Rock") {
        recommendations = {" Song 1", " Song 2", " Song 3"};
    } else if (mood == "Energetic" && genre == "Pop") {
        recommendations = {" Song 1", " Song 2", " Song 3"};
    } else if (mood == "Energetic" && genre == "R&B") {
        recommendations = {" Song 1", " Song 2", " Song 3"};
    } else if (mood == "Energetic" && genre == "K-Pop") {
        recommendations = {" Song 1", " Song 2", " Song 3"};
    } else if (mood == "Energetic" && genre == "Rock") {
        recommendations = {" Song 1", " Song 2", " Song 3"};
    } else {
        cout << "No recommendations available for the selected mood and genre." << endl;
        return 0;
    }
    
    // Display selected choices
    cout << endl;
    cout << "You selected:" << endl;
    cout << "Mood  : " << mood << endl;
    cout << "Genre : " << genre << endl;

    // Display recommendations
    vector<Song> recommendations = getRecommendations(mood, genre);

    if (!recommendations.empty()) {
       cout << endl;
       cout << "Recommended Songs:" << endl;

        for (const auto& song : recommendations) {
            cout << "- " << song.title
                 << " by " << song.artist << endl;
        }
    }

     cout << endl;
    cout << "Thank you for using Spotify Music Recommender!"
         << endl;

    return 0;
}
