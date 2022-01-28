#include <iostream>
#include <string>
using namespace std;

void studentGradesGames();
void maxInAnArray();

int main()
{
    studentGradesGames();
    maxInAnArray();
}

void studentGradesGames() {
    string gamesForSale[4] = { "Super Mario World", "Pyre", "Doom Eternal", "Risk Of Rain" };

    float studentGrades[4] = { 87.32, 100, 72, 90 };

    for (int i = 0; i <= 4; i++) {
        cout << gamesForSale[i] << "\n";
        cout << studentGrades[i] << "\n";
    }
}

void maxInAnArray() {

    const int MAX_INDEX = 10;
    int pickAnumber[MAX_INDEX];

    for (int index = 0; index < MAX_INDEX; index++)
    {
        cout << "Pick a number! Any Number : "; cin >> pickAnumber[index];
        cout << endl;
    }

    int max = pickAnumber[0];

    //What will this array do?
    for (int index = 0; index < MAX_INDEX; index++)
    {
        if (pickAnumber[index] > max)
            max = pickAnumber[index];
    }

    //How could we use this information?
}