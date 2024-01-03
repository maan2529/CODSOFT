#include <iostream>
#include <conio.h>
#include <string>
#include <vector>
#include <array>
#include <list>
#include <map>

#define MAX_LANGUAGE 4
#define MAX_City 4
#define MOVIE_TIME 5
#define WINDOW_SEAT 10
#define BALCONY_SEAT 30
#define BOX_SEAT 10

using namespace std;

class MovieTicketBookingSystem
{
private:
    vector<string> cityName;
    array<string, MAX_LANGUAGE> language;
    map<string, list<string>> movieName;    // language and related movie name(language ,movie name)
    map<string, list<string>> movieDetails; // language and related movie details //enter booking option in it (language ,movie details)
    array<string, MOVIE_TIME> movieTime;
    int numberOfSeats;
    int windowSeat[10];
    int balconySeat[30];
    int boxSeat[10];
    int amountPerSeat;

public:
    MovieTicketBookingSystem()
    {
        amountPerSeat = 700;
        for (int i = 1; i <= WINDOW_SEAT; i++)
        {
            windowSeat[i] = i;
        }
        for (int i = 1; i <= BALCONY_SEAT; i++)
        {
            balconySeat[i] = i;
        }
        for (int i = 1; i <= BOX_SEAT; i++)
        {
            boxSeat[i] = i;
        }
    }
    void setMovieData()
    {

        // Entered City name
        cityName.push_back("Pune");
        cityName.push_back("Mumbai");
        cityName.push_back("Kolkata");
        cityName.push_back("Chennai");

        // Entered language
        language[0] = "Hindi";
        language[1] = "English";
        language[2] = "Bengali";
        language[3] = "Marathi";

        // Entered language and movie Name
        movieName["Hindi"].push_back("RRR");
        movieName["Hindi"].push_back("JAVAN");
        movieName["Hindi"].push_back("RAEES");
        movieName["Hindi"].push_back("JANVAR");

        movieName["English"].push_back("YOURNAME");
        movieName["English"].push_back("SNOWDEN");

        movieName["Bengali"].push_back("MANUSH");
        movieName["Bengali"].push_back("PRAKTAN");

        movieName["Marathi"].push_back("AATMAPAMPHLET");
        movieName["Marathi"].push_back("GODAVARI");
        movieName["Marathi"].push_back("PANGHRUN");

        // DISPLAY TIME

        movieTime[0] = "1. 8 AM";
        movieTime[1] = "2. 11:30 AM";
        movieTime[2] = "3. 2 PM";
        movieTime[3] = "4. 5 PM";
        movieTime[4] = "5. 9 PM";
    }
    bool TicketBookingSystem()
    {
        string cityNameEnt;
        string languageEnt;
        string movieEnt;
        int timeEnt;
        int seatCategory;
        int seat = -1;
        bool flag = 1;
        bool seatFlag = 1;

        while (flag != 0)
        {
            cout << "\n=====================================================";
            
            cout << "\nCity Name\n";
            for (int i = 0; i < MAX_City; i++)
            {
                cout << i + 1 << ". " << cityName[i] << endl;
            }
            cout << endl;

            cout << "Please Enter Your City Name Form Given List: ";
            cin >> cityNameEnt;

            while (cityNameEnt != "Pune" && cityNameEnt != "pune" && cityNameEnt != "Mumbai" && cityNameEnt != "mumbai" && cityNameEnt != "Kolkata" && cityNameEnt != "kolkata" && cityNameEnt != "Chennai" && cityNameEnt != "chennai")
            {
                cout << "\nAgain Enter Your City Name Form Given List: ";
                cin >> cityNameEnt;
            }
            cout << "-------------------------------------------------------\n";
            if (cityNameEnt == "Pune" || cityNameEnt == "pune" || cityNameEnt == "Mumbai" || cityNameEnt == "mumbai" || cityNameEnt == "Kolkata" || cityNameEnt == "kolkata" || cityNameEnt == "Chennai" || cityNameEnt == "chennai")
            {
                for (int i = 0; i < MAX_LANGUAGE; i++)
                {
                    cout << language[i] << endl;
                }
                cout << endl;
                cout << "Please Enter Your Language Name Form Given List : ";
                cin >> languageEnt;
                while (languageEnt != "Hindi" && languageEnt != "hindi" && languageEnt != "English" && languageEnt != "english" && languageEnt != "BENGALI" && languageEnt != "bengali" && languageEnt != "MARATHI" && languageEnt != "marathi")
                {
                    cout << "Aagain Enter Your Language Name Form Given List: ";
                    cin >> languageEnt;
                }
                cout << "-------------------------------------------------------\n";
                if (languageEnt == "HINDI" || languageEnt == "hindi" || languageEnt == "ENGLISH" || languageEnt == "english" || languageEnt == "BENGALI" || languageEnt == "bengali" || languageEnt == "MARATHI" || languageEnt == "marathi")
                {
                    if (languageEnt == "Hindi" || languageEnt == "hindi")
                    {
                        for (auto x : movieName["Hindi"])
                        {
                            cout << x << " ";
                        }
                        cout << endl;
                        cout << "\nChoose Movie : ";
                        cin >> movieEnt;
                        while (movieEnt != "RRR" && movieEnt != "rrr" && movieEnt != "JAVAN" && movieEnt != "javan" && movieEnt != "RAEES" && movieEnt != "raees" && movieEnt != "JANVAR" && movieEnt != "janvar")
                        {
                            cout << "Please Choose Movie From list\n";
                            cin >> movieEnt;
                        }
                        cout << "-------------------------------------------------------\n";
                    }
                    if (languageEnt == "English" || languageEnt == "english")
                    {
                        for (auto x : movieName["English"])
                        {
                            cout << x << " ";
                        }
                        cout << endl;
                        cout << "Choose Movie\n";
                        cin >> movieEnt;
                        while (movieEnt != "YOURNAME" && movieEnt != "yourname" && movieEnt != "SNOWDEN" && movieEnt != "snowden")
                        {
                            cout << "Please Choose Movie From list\n";
                            cin >> movieEnt;
                        }
                        cout << "-------------------------------------------------------\n";
                    }
                    if (languageEnt == "Kolkata" || languageEnt == "kolkata")
                    {
                        for (auto x : movieName["Kolkata"])
                        {
                            cout << x << " ";
                        }
                        cout << endl;
                        cout << "Choose Movie\n";
                        cin >> movieEnt;
                        while (movieEnt != "MANUSH" && movieEnt != "manush" && movieEnt != "PRAKTAN" && movieEnt != "praktan")
                        {
                            cout << "Please Choose Movie From list\n";
                            cin >> movieEnt;
                        }
                        cout << "-------------------------------------------------------\n";
                    }
                    if (languageEnt == "Chennai" || languageEnt == "chennai")
                    {
                        for (auto x : movieName["Chennai"])
                        {
                            cout << x << " ";
                        }
                        cout << endl;
                        cout << "Choose Movie\n";
                        cin >> movieEnt;
                        while (movieEnt != "AATMAPAMPHLET" && movieEnt != "aatmapamphlet" && movieEnt != "GODAVARI" && movieEnt != "godavari" && movieEnt != "PANGHRUN" && movieEnt != "panghrun")
                        {
                            cout << "Please Choose Movie From list\n";
                            cin >> movieEnt;
                        }
                        cout << "-------------------------------------------------------\n";
                    }
                    for (int i = 0; i < MOVIE_TIME; i++)
                    {
                        cout << movieTime[i];
                        cout << endl;
                    }
                    cout << endl;

                    cout << "Enter Time [Only number (1/2/3/4/5)] : ";
                    cin >> timeEnt;
                    while (timeEnt < 1 || timeEnt > 6)
                    {
                        cout << "Again , Enter Time [Only number (1/2/3/4/5)] : ";
                        cin >> timeEnt;
                    }
                    cout << endl;
                    cout << "-------------------------------------------------------\n";

                    cout << "How many seat you want to reserve : ";
                    cin >> numberOfSeats;
                    cout << "-------------------------------------------------------\n";
                    display();
                    cout << endl;
                    // cout << "--------------------------------------------------\n";

                    cout << "For window seat enter 1 \n";
                    cout << "For Balcony seat enter 2 \n";
                    cout << "For Box seat enter 3 \n";
                    cin >> seatCategory;
                    cout << "-------------------------------------------------------\n";
                    switch (seatCategory)
                    {
                    case 1:
                        cout << "\nEnter seat you want to researve : ";
                        for (int i = 1; i <= numberOfSeats; i++)
                        {
                            if (i > 1)
                                cout << "\nEnter seat " << i << "  number : ";
                            while (flag == 1)
                            {
                                cin >> seat;
                                if (windowSeat[seat] == seat)
                                {
                                    windowSeat[seat] = 0;
                                    flag = 0;
                                }
                                else
                                    cout << "Seat is already researved \n";
                            }
                            flag = 1;

                            cout << "seat " << seat << " researved\n";
                        }
                        cout << "-------------------------------------------------------\n";
                        break;
                    case 2:
                        cout << "\nEnter seat you want to researve : ";
                        for (int i = 1; i <= numberOfSeats; i++)
                        {
                            if (i > 1)
                                cout << "\nEnter seat " << i << "  number : ";
                            while (flag == 1)
                            {
                                cin >> seat;
                                if (balconySeat[seat] == seat)
                                {
                                    balconySeat[seat] = 0;
                                    flag = 0;
                                }
                                else
                                    cout << "Seat is already researved \n";
                            }
                            flag = 1;

                            cout << "seat " << seat << " researved\n";
                        }
                        cout << "-------------------------------------------------------\n";
                        break;
                    case 3:
                        cout << "\nEnter seat you want to researve : ";
                        for (int i = 1; i <= numberOfSeats; i++)
                        {
                            if (i > 1)
                                cout << "\nEnter seat " << i << "  number : ";
                            while (flag == 1)
                            {
                                cin >> seat;
                                if (boxSeat[seat] == seat)
                                {
                                    boxSeat[seat] = 0;
                                    flag = 0;
                                }
                                else
                                    cout << "Seat is already researved \n";
                            }
                            flag = 1;

                            cout << "seat " << seat << " researved\n";
                        }
                        cout << "-------------------------------------------------------\n";
                        break;
                    default:
                        cout << "Invalid Seat\n";
                    }
                }
                display();
                cout << " \npress 1 for continue ";
                cout << " \npress 0 for exit \n";
                cin >> flag;
                cout << "\n====================================================";
            }
        }
    }

    void display()
    {
        cout << "Window Seat\n";
        for (int i = 1; i <= WINDOW_SEAT; i++)
        {
            if (windowSeat[i] == 0)
                cout << "Booked ";
            else if (i < 10)
                cout << "0" << windowSeat[i] << " ";
            else
                cout << windowSeat[i] << " ";
        }
        cout << endl;
        cout << "\nBalcony Seat\n";
        for (int i = 1; i <= BALCONY_SEAT; i++)
        {
            if (balconySeat[i] == 0)
                cout << "Booked ";
            else if (i < 10)
                cout << "0" << balconySeat[i] << " ";
            else
                cout << balconySeat[i] << " ";

            if (i % 10 == 0)
                cout << endl;
        }
        cout << endl;
        cout << "Box Seat\n";
        for (int i = 1; i <= BOX_SEAT; i++)
        {
            if (boxSeat[i] == 0)
                cout << "Booked ";
            else if (i < 10)
                cout << "0" << boxSeat[i] << " ";
            else
                cout << boxSeat[i] << " ";
        }
        cout << "-------------------------------------------------------\n";
    }
};

int main()
{
    MovieTicketBookingSystem s;
    s.setMovieData();
    s.TicketBookingSystem();
    s.display();

    getch();
    return 0;
}
