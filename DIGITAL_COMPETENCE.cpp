#include <iostream>
#include <vector>
#include <string>
#include <limits>
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
        // Error Handling (Invalid Input)/Anis
        while (true) {
            cout << "Enter your choice: ";
        if (cin >> moodChoice) {
            if (moodChoice >= 1 && moodChoice <= 2) {
                break;  // Valid input (1 or 2), exit the loop
            }
            else {
                 cout << "Invalid choice. Please enter 1 or 2: \n" << endl;
            }
        }
        else {
            cout << "Invalid input. Please enter a number.\n" << endl;

            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
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
        // Error Handling (Invalid Input)/Anis
       while (true) {
             cout << "Enter your choice: ";
          if (cin >> moodChoice) {
             if (moodChoice >= 1 && moodChoice <= 4) {
                break; // Valid input, exit loop
             }
             else {
                 cout << "Invalid choice. Please enter a number from 1 to 4:\n ";
             }
         }
         else {
             cout << "Invalid input. Please enter a number.\n ";
             cin.clear();
             cin.ignore(numeric_limits<streamsize>::max(), '\n');
         }
     }
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
        // Error Handling (Invalid Input)/Anis
        while (true) {
            cout << "Enter your choice: ";
            if (cin >> genreChoice) {
        if (genreChoice >= 1 && genreChoice <= 4) {
            break; // Valid input (1-4), exit loop
        } else {
        cout << "Invalid choice. Please enter a number from 1 to 4: ";
        }
    } else {
        cout << "Invalid input. Please enter a number.\n ";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }
}
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

    // SONG/PLAYLIST DATA
    // Anis's Part
    // Songs using user's input
    vector<string> recommendations;

    if (mood == "Happy" && genre == "Pop") {
        recommendations = {"\"Happy\" by Pharrel Williams", "\"Shake It Off\" by Taylor Swift", "\"Can't Stop the Feeling!\" by Justin Timberlake"};
    } else if (mood == "Happy" && genre == "R&B") {
        recommendations = {"\"Leave The Door Open\" by Silk Sonic", "\"Watermelon Sugar\" by Harry Styles", "\"Good Days\" by SZA"};
    } else if (mood == "Happy" && genre == "K-Pop") {
        recommendations = {"\"Dynamite\" by BTS", "\"How You Like That\" by BLACKPINK", "\"Dance The Night Away\" by TWICE"};
    } else if (mood == "Happy" && genre == "Rock") {
        recommendations = {"\"Don't Stop Me Now\" by Queen", "\"On Top of the World\" by Imagine Dragons", "\"Adventure of a Lifetime\" by Coldplay"};
    } else if (mood == "Sad" && genre == "Pop") {
        recommendations = {"\"ghostin\" by Ariana Grande", "\"Traitor\" by Olivia Rodrigo", "\"When We Were Young\" by Adele"};
    } else if (mood == "Sad" && genre == "R&B") {
        recommendations = {"\"Stay\" by The Kid LAROI & Justin Bieber", "\"Heartbreak Anniversary\" by Giveon", "\"Call Out My Name\" by The Weeknd"};
    } else if (mood == "Sad" && genre == "K-Pop") {
        recommendations = {"\"Breathe(숨)\" by Lee Hi", "\"How Can I Love the Heartbreak, You're the One I Love\" by AKMU", "\"Fine\" by Taeyeon"};
    } else if (mood == "Sad" && genre == "Rock") {
       recommendations = {"\"Black\" by Pearl Jam", "\"Snuff\" by Slipknot", "\"Asleep\" by The Smiths"}; 
    } else if (mood == "Chill" && genre == "Pop") {
        recommendations = {"\"Paris in the Rain\" by Lauv", "\"Pink + White\" by Frank Ocean", "\"Sunflower\" by Post Malone & Swae Lee"};
    } else if (mood == "Chill" && genre == "R&B") {
        recommendations = {"\"Snooze\" by SZA", "\"Get You\" by Daniel Caesar feat. Kali Uchis", "\"PRIDE.\" by Steve Lacy / Kendrick Lamar"};
    } else if (mood == "Chill" && genre == "K-Pop") {
        recommendations = {"\"Through the Night(밤편지)\" by IU", "\"Ditto\" by NewJeans", "\"UN Village\" by Baekhyun"};
    } else if (mood == "Chill" && genre == "Rock") {
        recommendations = {"\"Chamber of Reflection\" by Mac DeMarco", "\"Yellow\" by Coldplay", "\"Gravity\" by John Mayer"};
    } else if (mood == "Energetic" && genre == "Pop") {
        recommendations = {"\"Levitating\" by Dua Lipa", "\"Blinding Lights\" by The Weeknd", "\"Uptown Funk\" by Mark Ronson feat. Bruno Mars"};
    } else if (mood == "Energetic" && genre == "R&B") {
        recommendations = {"\"Yeah!\" by Usher feat. Lil Jon & Ludacris", "\"24K Magic\" by Bruno Mars", "\"Fine China\" by Chris Brown"};
    } else if (mood == "Energetic" && genre == "K-Pop") {
        recommendations = {"\"MIC Drop(Steve Aoki Remix)\" by BTS", "\"Kill This Love\" by BLACKPINK", "\"VERY NICE(아주 NICE)\" by SEVENTEEN"};
    } else if (mood == "Energetic" && genre == "Rock") {
        recommendations = {"\"Misery Business\" by Paramore", "\"Mr. Brightside\" by The Killers", "\"Guerrilla Radio\" by Rage Against The Machine"};
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
    //Anis's Part
    //User's Recommendation without using any input
    vector<Song> recommendations = getRecommendations(mood, genre);

    if (!recommendations.empty()) {
        cout << "\nPress Enter to view your recommendations";
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cin.get();
        cout << endl;
        cout << "Recommended Songs:" << endl;

        for (const auto& song : recommendations) {
            cout << "- " << song.title
                 << " by " << song.artist << endl;
        }
    }

    //End of Program
    cout << endl;
    cout << "Thank you for using Spotify Music Recommender!"
         << endl;

    return 0;
}
