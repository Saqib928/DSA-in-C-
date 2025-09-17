//WAP to take input days from the user and convert it into years, months, and remaining days.
#include <iostream>
using namespace std;

int main() {
    int total_days;
    cout << "Enter the number of days: ";
    cin >> total_days;

    int years = total_days / 365;
    int remaining_days = total_days % 365;
    int months = remaining_days / 30;
    int days = remaining_days % 30;
  
    cout << total_days << " days is approximately " 
         << years << " years, " 
         << months << " months, and " 
         << days << " days." << endl;

    return 0;
}
