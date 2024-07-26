//Lab7-1.cpp - calculates the average number of text
//messages sent each day for 7 days
//Created/revised by <your name> on <current date>

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{	
    int day = 0;
    int totalTexts=0;
    int dailyTexts=0;
    double average = 0.0;  

    for(day = 1; day <= 8; day += 1)
        {
            cout << "Enter the number of texts for day " << day << ": ";
            cin >> dailyTexts;
            totalTexts = totalTexts + dailyTexts;
        }

    average = static_cast<double>(totalTexts) / (day-1);
    cout << fixed << setprecision(0);
    cout << "You sent aproximetly " << average << " texts mesage per day ." << endl;
    

     
    return 0;
}   //end of main function