// Create two classes DM and DB which stores values of distances. DM stores distances in
// meters and centimeters and DB in feet and inches. Write a program that can read values for
// the class objects and add one object of DM with another object of DB. Use a friend function to carry out addition operation

#include <iostream>

using namespace std;

class DB; // Forward declaration

class DM
{
private:
    int meters;
    int centimeters;

public:
    DM(int m, int cm) : meters(m), centimeters(cm) {}

    friend void add(DM d, DB b);
};

class DB
{
private:
    int feet;
    int inches;

public:
    DB(int f, int in) : feet(f), inches(in) {}

    friend void add(DM d, DB b);
};

void add(DM d, DB b)
{
    // Converting DB object to meters and centimeters
    int totalCentimeters = b.feet * 12 * 2.54 + b.inches * 2.54;

    // Adding DM and converted DB values
    int resultMeters = d.meters + totalCentimeters / 100;
    int resultCentimeters = d.centimeters + totalCentimeters % 100;

    // Adjusting result if centimeters exceed 100
    if (resultCentimeters >= 100)
    {
        resultMeters += resultCentimeters / 100;
        resultCentimeters %= 100;
    }

    cout << "Sum of distances: " << resultMeters << " meters and " << resultCentimeters << " centimeters." << endl;
}

int main()
{
    int meters, centimeters, feet, inches;

    cout << "Enter distance in meters and centimeters: ";
    cin >> meters >> centimeters;

    cout << "Enter distance in feet and inches: ";
    cin >> feet >> inches;

    DM dm(meters, centimeters);
    DB db(feet, inches);

    add(dm, db);

    return 0;
}
