//
//  main.cpp
//  JR. C++ Pointers
//  Professor: Tony Hilton
//  Created by Jose Rodriguez on 11/29/18.
//
//

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void badSwap( int x, int y);// badswap funtion
void goodSwap ( int* const pX, int* const pY); // good swap function & passing a constant pointer
int getNumberFromUser (string prompt); // get number from user funtion
void storyLine(); // storyLine function

int main()// main function
{
    srand(static_cast<unsigned int>(time(0))); // produccing a ramdow number
    int myScore = rand() % 100 + 1; // creating number
    storyLine(); // displaying story line function
    int yourScore = getNumberFromUser ("Type your Number\n "); // getting user number
    cout << "Original Values\n"; // dislay values
    cout << "myScore: " << myScore << "\n"; // display my number
    cout << "yourScore: " << yourScore << "\n\n"; // display user number
    
    cout << "Here is the Swap\n"; // display swap
    badSwap(myScore, yourScore); // calling badswap function
    cout << "myScore: " << myScore << "\n "; // displaying my number
    cout << "yourScore: " << yourScore << "\n\n"; // displaying user number
    
    cout << "Just kidding! Please press enter to see the swap\n\n "; // display message of joke
    string enter; // pausing the program
    getline(cin, enter);
    getline(cin, enter);
    
    cout << "Here is the magic\n"; // display actual swap
    goodSwap(&myScore, &yourScore); // calling good swapp function
    cout << "myScore: " << myScore << "\n"; // display my number swap
    cout << "yourScore: " << yourScore << "\n"; // display your number swap
    
    return 0; // return main function
    
}

void badSwap(int x, int y)// creating badSwap function
{
    int temp = x;
    x = y;
    y = temp;
    
}

void goodSwap(int* const pX, int* const pY) // creating good swap function
{
    int temp = *pX;
    *pX = *pY;
    *pY = temp;
    
}

int getNumberFromUser (string prompt) // function that take a number as the prompt and return it as an interge
{
    int num;
    cout << prompt;
    cin >> num;
    return num;
}
                                       
void storyLine() // creating storyline fucntion
{
    string player;
    cout << " ************* Welcome to the Swapper ************\n\n";
    cout << " Please Enter Your Name: ";
    cin >> player;
    cout << "\n\nWelcome " << player << endl;
    cout << "Enter a number & I will  Swapp it for my Number\n\n";
    
}

