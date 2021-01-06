#include <bits/stdc++.h>
using namespace std;

class Book
{
    public:
        int day;
        int month;
        int year;

        Book()
        {
            day = 0;
            month = 0;
            year = 0;
        }

        Book(int d, int m, int y)
        {
            day = d;
            month = m;
            year = y;
        }
};

class Returned : public Book
{
    public:
        Returned(int d, int m, int y)
        {
            day = d;
            month = m;
            year = y;
        }

        void fine(Returned r, Book b)
        {
            if(r.year > b.year)
                cout << 10000 << endl;
            else if(r.month > b.month && r.year == b.year)
                cout << 500 * (r.month - b.month) << endl;
            else if(r.day > b.day && r.month == b.month)
                cout << 15 * (r.day - b.day) << endl;
            else
                cout << 0 << endl;
        }
};

int main()
{
    int dr, mr, yr;
    cin >> dr;
    cin >> mr;
    cin >> yr;

    int db, mb, yb;
    cin >> db;
    cin >> mb;
    cin >> yb;

    Returned r(dr, mr, yr);
    Book b(db, mb, yb);

    r.fine(r, b);
}