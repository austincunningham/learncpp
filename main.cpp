//Hello World
/* By Austin Cunningham */
#include <iostream>
using namespace std;

int main() 
{
    //std::cout << "Hello World\n";
    string name, fruit;
    cout << "Please enter your name: \n";
    cin >> name;
    cout << "Please enter your favourite fruit : \n";
    cin >> fruit;
    //cout << name <<" Hello World\n";
    cout << "Hello, " << name << ". I understand your favourite fruit is "<< fruit << endl;
    return 0;
}