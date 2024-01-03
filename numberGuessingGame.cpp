#include <iostream>
#include <conio.h>
#include <cstdlib>
#include <time.h>

using namespace std;
class RandomGuessingGame
{
private:
    int randomNumber;
    int guessNumber;

public:
    RandomGuessingGame()
    {
        srand(time(0));
        randomNumber = (rand() % 1000) + 1;
        guessNumber = 0;
    }
    int randomGuessingGame(int remaingChances)
    {

        // while (randomNumber != guessNumber)
        // {

        if (guessNumber == 0)
        {
            cout << "\n--------------------------------------------------------------\n";
            cout << "\nRemaining chances : " << remaingChances << "\n";
            cout << "\nGuess the number between 1 to 1000 : ";
            cin >> guessNumber;
        }
        else
        {
            cout << "\n--------------------------------------------------------------\n";
            cout << "\nRemaining chances : " << remaingChances << "\n";
            cout << "\nPrivious number entered " << guessNumber << "\n\nGuess the number between 1 to 1000 again: ";
            cin >> guessNumber;
        }

        if (guessNumber > randomNumber)
        {
            cout << "\nThe number you have guess is greater than random number.\n";
            cout << "\nPlease Enter smaller number(<-).\n";
            cout << "\n--------------------------------------------------------------\n";
        }
        else if (guessNumber < randomNumber)
        {
            cout << "\nThe number you have guess is smaller than random number.\n";
            cout << "\nPlease Enter bigger number(->).\n";
            cout << "\n--------------------------------------------------------------\n";
        }
        else
        {
            cout << "\n=============================================================\n";
            cout << "\nCongratulations!!! you have won the match.\n\nRandom number was " << randomNumber;
            cout << "\n\n=============================================================\n";
            return 1;
        }
        return 0;
        // }
    }
    void hardLevel()
    {
        int hardLevelChance = 10;
        int i, ret;
        cout << "\n\t================================\n";
        cout << "\n\t\t *Game Start*\n";
        cout << "\n\t\t *Level Hard*\n";
        cout << "\n\t *You have got Only 10 chances*\n";
        cout << "\n\t================================\n";
        for (int i = 0; i < hardLevelChance; i++)
        {
            ret = randomGuessingGame(hardLevelChance - i);
            if (ret)
                break;

            if (i == 6)
            {
                cout << "\n***********************************************************\n";
                cout << "Remaining Chances 3\n\n"
                     << "HINT : Random number is greater than " << randomNumber - 87 << " and less than " << randomNumber + 73;
                cout << "\n***********************************************************\n";
            }
        }
        if (ret != 1)
        {
            cout << "\n\n=============================================================\n";
            cout << "\nRemaining Chances 0. \n\nYou Loss the Game, Try again to Win \n\nRandom Number : "<<randomNumber;
            cout << "\n=============================================================\n";
        }
    }

    void mediumLevel()
    {
        int mediumLevelChance = 20;
        int i, ret;
        cout << "\n\t================================\n";
        cout << "\n\t\t *Game Start*\n";
        cout << "\n\t\t*Level Medium*\n";
        cout << "\n\t   *You have got 20 chances*\n";
        cout << "\n\t================================\n";
        for (int i = 0; i < mediumLevelChance; i++)
        {
            ret = randomGuessingGame(mediumLevelChance - i);
            if (ret)
                break;

            if (i == 14)
            {
                cout << "\n***********************************************************\n";
                cout << "Remaining Chances 5\n\n"
                     << "HINT : Random number is greater than " << randomNumber - 57 << " and less than " << randomNumber + 61;
                cout << "\n***********************************************************\n";
            }
        }
        if (ret != 1)
        {
            cout << "\n\n=============================================================\n";
            cout << "\nRemaining Chances 0. \n\nYou Loss the Game, Try again to Win \n\nRandom Number : "<<randomNumber;
            cout << "\n=============================================================\n";
        }
    }

    void easyLevel()
    {
        int easyLevelChance = 50;
        int i, ret;
        cout << "\n\t================================\n";
        cout << "\n\t\t *Game Start*\n";
        cout << "\n\t\t*Level Easy*\n";
        cout << "\n\t   *You have got 50 chances*\n";
        cout << "\n\t================================\n";
        for (int i = 0; i < easyLevelChance; i++)
        {
            ret = randomGuessingGame(easyLevelChance - i);
            if (ret)
                break;

            if (i == 39)
            {
                cout << "\n***********************************************************\n";
                cout << "Remaining Chances 10\n\n"
                     << "HINT : Random number is greater than " << randomNumber - 27 << " and less than " << randomNumber + 41;
                cout << "\n***********************************************************\n";
            }
        }
        if (ret != 1)
        {
            cout << "\n\n=============================================================\n";
            cout << "\nRemaining Chances 0. \n\nYou Loss the Game, Try again to Win\n\nRandom Number : "<<randomNumber;
            cout << "\n=============================================================\n";
        }
    }
};
int main()
{
    RandomGuessingGame g1;
    int level;

    cout<<"\n\t\tNUMBER GUESSING GAME\n\n";
    cout<<"\t\t    GAME RULE\n\n";

    cout<<"You have to guess a random number ,generated by system \nDifferent levels are given. System will show your ent-\nered number is greater or smaller than Random number \n\n";




    cout << "\nLevels\n";
    cout << "\nEnter 1 for Hard\n";
    cout << "\nEnter 2 for Medium\n";
    cout << "\nEnter 3 for Easy\n\n";
    cout << "Choose Level : ";
    cin >> level;

    while (level > 3)
    {
        cout << "\nInvalid Input, Enter again Or for Exit Enter -1 : ";
        cin >> level;
    }

   
        if (level == 1)
        {
            g1.hardLevel();
        }
        else if (level == 2)
        {
            g1.mediumLevel();
        }
        else if(level==3)
        {
            g1.easyLevel();
        }else
        {
            cout<<"\nYou are now out of program ";
        }
    

    getch();
    return 0;
}