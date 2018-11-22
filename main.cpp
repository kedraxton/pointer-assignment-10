//  Pointer Assignment # 10
//  Kenna Draxton
//  new time at swim



#include <iostream>
#include <string>

using namespace std;
//functions that will be used
void switchStanding(int *player1, int *player2);
void secondRaceSwitch(int *a, int *b);
int* averageRaceTimes(int* player1, int* player2);




//function that will switch the racers in their standing position
void secondRaceSwitch(int *a, int *b)
{
    int p;
    p = *a;
    *a = *b;
    *b = p;
}

//switches racer names
void switchRacerNames(string *a, string *b)
{
    string n;
    n = *a;
    *a = *b;
    *b = n;
    
}

//gets the average race time between the two racers.....still not working....no matter it always produces the answer 32767
int* averageRaceTimes(int* player1, int* player2)
{
    
    int averageTime;
    int* paverageTime = &averageTime;//Declaring pointer to use.
    averageTime = (*player1 * *player2)/2;
    return paverageTime; //returning pointer
}

//main function

int main()
{
    
    int a = 0;
    int b = 0;
    
    string racer1;
    string racer2;
    
    
    //welcome to user
    cout << "Welcome to the Fall Festival races!" << endl;
    //collect racers' names
    cout << "Enter racer 1 name: " << endl;
    cin >> racer1;
    cout << "Enter racer 2 name: " << endl;
    cin >> racer2;
    //enter positions of racers
    int position1, position2;
    cout << "Enter position of first racer: " << endl;
    cin >> position1;
    cout << "Enter position of second racer: " << endl;
    cin >> position2;
    cout << "first racer is in position: " << position1 << endl;
    cout << "second racer is in position: " << position2 << "\n" << endl;
    
    //onto the second heat and collecting race times
    cout << "The second heat has just finished and the places have changed a little bit...." << endl;
    cout << "enter second heat time for " << racer1 << ":" << endl;
    cin >> a;
    cout << "enter second heat time for " << racer2 << ":" << endl;
    cin >> b;
    
    //calling for the position and names to be switched
    secondRaceSwitch(&position1, &position2);
   
    cout << "now " << racer1 << " is in:" << position1 << " and " << racer2 << " is in position:" << position2 << endl;
    
    int averageTime;
    int* paverageTime = &averageTime;//Declaring pointer to use.
    
    //calling the averageRaceTimes function
    paverageTime = averageRaceTimes(&a, &b);
    cout << "The average race time for the second heat was " << *paverageTime << endl;
    
    
    return 0;
}
