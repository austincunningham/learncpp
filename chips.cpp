#include <iostream>
#include <ctime>
#include <cstdlib>

// sets the scope of vars to 
using namespace std;


const int MAX_CHIPS = 100;
const float MAX_TURN = .5;

int main()
{
    bool player1Turn = true;
    bool player2Turn = false;
    bool gameOver = false;

    int chipsInPile = 0;
    int chipsTaken = 0;
    int maxPerTurn = 0;

    char scanfWorkToo [200];

    string playerName[2];
    // string playerName[2] = {"tim","tam"};
    // playerName[0]= "tim";

    cout << "Player 1, please enter your name: \n";
    cin >> playerName[0];

    cout << "Player 2, please enter your name: \n";
    cin >> playerName[1];

    int ticTacToe[3][3];

    //seed chips in pile
    srand(time(0));
    chipsInPile = (rand() % MAX_CHIPS ) +1 ;
    
    cout << "This round will start with " << chipsInPile << " chips in the pile\n";
    //cout << "You can take up to " << static_cast<int>(MAX_TURN * chipsInPile) << endl;

    while (gameOver == false)
    {
        do
        {
            maxPerTurn = MAX_TURN * chipsInPile;       
            if (player1Turn)
            {
                cout << playerName[0] << " How many chips would you like?\n";
            }
            else
            {
                cout << playerName[1] << " How many chips would you like?\n";
            }
            
            cout << "You can take up to " ;
            if(maxPerTurn == 0)
            {
                cout << "1\n";
            }
            else
            {
                cout << maxPerTurn << endl;
            }
            
            cin >> chipsTaken;

            //chipsTaken = (rand() % maxPerTurn) +1;

            cout << "Number taken: " << chipsTaken << endl;
        } while ((chipsTaken > maxPerTurn) && chipsTaken > 1);

        chipsInPile = chipsInPile - chipsTaken;
        cout << "There are " << chipsInPile << " left in the pile \n";
        if (chipsInPile == 0)
        {
            gameOver = true;
            if (player1Turn)
            {
                cout << playerName[1] << ", congrats you won\n";
            }
            else 
            {
                cout << playerName[0] << ", congrats you won\n";
            }
            cout
        }
        else 
        {
            player1Turn = !player1Turn;
        }
    }

    cout << "Game over !!!!!!!!!!!!!!!!!";

    return 0;
}