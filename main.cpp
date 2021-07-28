
#include <iostream>
#include <cstring>
using namespace std;

int main()
{
            //Constants&Variables
const double WEEKEND_RATE = 0.15; // $0.15 / minute
const double EVENING_RATE = 0.25; // $0.25 / minute
const double DAY_RATE = 0.40; // $0.40 / minute
char day1;                    // first input char for dayofweek
char day2;
int hour;                     //Start time hour input
char seperator;               //input between hour and min
int minute;
int LengthOfCall;             //length of call in mins

char again;                   // loop control
int TimeStarted;              // Time in 24hr clock
double billingRate;
double CostOfCall;

do{
    // input the day of week
cout << "Enter the day (Mo Tu We Th Fr Sa Su) : ";
cin >> day1 >>day2; //input
day1 = toupper(day1);
day2 = toupper(day2);

    //input the time of call
cout << "Enter the time started (ex: 14:35) : ";
cin >> hour >> seperator >> minute;
TimeStarted = hour*100 +minute;

    //input length of call
cout << "Enter the length of the call in minutes: ";
cin >> LengthOfCall;

    //process determine billing rate and output
if (day1=='S' && day2=='A')
    billingRate = WEEKEND_RATE;
else if (day1=='S' && day2=='U')
    billingRate = WEEKEND_RATE;
else{
    if (TimeStarted >= 800 && TimeStarted <= 1800)
        billingRate = DAY_RATE;
    else
        billingRate = EVENING_RATE;
}
CostOfCall = LengthOfCall * billingRate;
        // calculated output
cout << "The cost of your call is: $ " <<CostOfCall << " dollars";

//loop
cout << endl;
cout << "Another call (Y/N)? ";
cin >> again;
again = toupper(again);

} while (again =='Y');
return 0;

}
