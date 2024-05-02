#include <iostream>

using namespace std;

// Function to calculate the division of two numbers
double divide(int dividend, int divisor)
{
    if (divisor == 0)
    {
        throw "Division by zero is not allowed!";
    }
 
    return static_cast<double>(dividend) / divisor;
}

int main()
{
    int dividend, divisor;
    cout << "Enter the dividend: ";
    cin >> dividend;
    cout << "Enter the divisor: ";
    cin >> divisor;

    try
    {
        double result = divide(dividend, divisor);
        cout << "Result of division: " << result << endl;
    }
    catch (const char *errorMessage)
    {
        cout << "Exception caught: " << errorMessage << endl;
    }

    return 0;
}
