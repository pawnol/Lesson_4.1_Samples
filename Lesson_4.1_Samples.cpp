/*
Lesson 4.1 Samples
Pawelski
3/29/2021
Here are the samples for this lesson!
*/

#include <iostream>
using namespace std;

int main()
{
    // Example #1
    int i = 0;
    while (i < 6) 
    {
        cout << "Ooh a piece of candy...\n";
        i++;
    }
    cout << "\n";

    // Example #2
    int j = 0;
    while (j < 6) {
        cout << j << "\n";
        j++;
    }
    cout << "OUTSIDE THE LOOP!\n\n";

    // Example #3
    int k = 6;
    while (k > 0) 
    {
        cout << k << "\n";
        k--;
    }
    cout << "\n";

    // Example #4
    int m = 0;
    int sum = 0;
    int number;
    while (m < 3) 
    {
        cout << "Enter a number >> ";
        cin >> number;
        sum += number;
        m++;
    }
    cout << "Sum: " << sum << "\n\n";

    // Example #5
    // In this example, the loop does not run as the condition is false
    // when the loop starts. Try changing l to get the loop to actually run.
    int l = 10;
    while (l < 3) 
    {
        cout << l << "\n";
        l++;
    }
    cout << "\n";

    // Example #6
    // This program allows the user to decide how many numbers to enter.
    string response = "Y";
    sum = 0;
    while (response == "Y") 
    {
        cout << "Enter a number >> ";
        cin >> number;
        sum += number;
        cout << "Do you want to enter a number? (Y/N) >> ";
        cin >> response;
    }
    cout << "Sum: " << sum << "\n\n";

    // Example #7
    // This program is similar to Example #6, but uses -1 as the sentinel.
    sum = 0;
    cout << "Enter a number >> ";
    cin >> number;
    while (number != -1)
    {
        sum += number;
        cout << "Enter another number (-1 to exit) >> ";
        cin >> number;
    }
    cout << "Sum: " << sum << "\n";
    return 0;
}
