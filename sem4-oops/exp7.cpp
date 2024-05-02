#include <iostream>
#include <string>

using namespace std;

class Media
{
protected:
    string title;
    double price;

public:
    Media(string t, double p) : title(t), price(p) {}

    // Virtual function for displaying media details
    virtual void display() const
    {
        cout << "Title: " << title << endl;
        cout << "Price: $" << price << endl;
    }
};

class Book : public Media
{
private:
    int numPages;

public:
    Book(string t, double p, int pages) : Media(t, p), numPages(pages) {}

    // Overriding the display function to include book-specific details
    void display() const override
    {
        cout << "Book Details:" << endl;
        Media::display(); // Call base class display function
        cout << "Number of Pages: " << numPages << endl;
    }
};

class Tape : public Media
{
private:
    double playingTime;

public:
    Tape(string t, double p, double time) : Media(t, p), playingTime(time) {}

    // Overriding the display function to include tape-specific details
    void display() const override
    {
        cout << "Tape Details:" << endl;
        Media::display(); // Call base class display function
        cout << "Playing Time: " << playingTime << " minutes" << endl;
    }
};

int main()
{
    // Create objects of derived classes
    Book book("The Great Gatsby", 15.99, 180);
    Tape tape("Pulp Fiction", 9.99, 154.5);

    // Use pointers to base class to demonstrate polymorphism
    Media *mediaPtr1 = &book;
    Media *mediaPtr2 = &tape;

    // Call display function through base class pointers
    cout << "Displaying Book Details:" << endl;
    mediaPtr1->display();
    cout << endl;

    cout << "Displaying Tape Details:" << endl;
    mediaPtr2->display();

    return 0;
}
