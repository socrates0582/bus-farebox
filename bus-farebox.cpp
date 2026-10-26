#include <iostream>
using namespace std;

int main() 
{
    int busroute, cardnum;
    cout << "What bus route are you on? Select 1-4: ";
    cin >> busroute;

while (busroute <1 || busroute >4)
{
    cout << "\nThere is no such bus route. ";
    cout << "\nWhat bus route are you on? Select 1-4: ";
    cin >> busroute;
}
    cout << "\nEnter your card number. 1 or 2: ";
    cin >> cardnum;


while (cardnum <1 || cardnum >2)
{
    cout << "\nThat card number doesn't exist.";
    cout << "\nEnter your card number. 1 or 2: ";
    cin >> cardnum;
}
    cout << "\nBus route is " << busroute << ". "<< "Card number is " << cardnum <<".\nFare accepted.";
    cout << "\n\nUnlimited Card Usage Bonuses:\n3 days in a row unlocks an unlimited week.\n";
    cout << "3 consecutive weeks of unlimited rides unlocks an ulimited month.\n";
    return 0;
}