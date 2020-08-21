#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main()
{
    int dice = 0;

    //seed rand
    srand(time(0));

    for (int i = 0; i < 200 ; i++)
    {

        dice = (rand()%6)+1;
        cout <<"You rolled a " << dice<< endl;
        switch (dice)
        {
        case 1:
            printf("One \n");
            break;
        case 2:
            printf("Two \n");
            break;
        case 3:
            printf("Three \n");
            break;
        case 4:
            printf("Four \n");
            break;
        case 5:
            printf("Five \n");
            break;
        case 6:
            printf("Six \n");
            break;
        default:
            printf("invalid input");
            break;
        }

    }
    return 0;
}