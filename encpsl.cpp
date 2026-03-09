#include <iostream>
using namespace std;

class Student
{
private:
    int marks;   // private data (hidden)

public:
    void setMarks(int m)   // setter function
    {
        marks = m;
    }

    int getMarks()   // getter function
    {
        return marks;
    }
};

int main()
{
    Student s;

    s.setMarks(85);   // setting value
    cout << "Marks = " << s.getMarks();

    return 0;
}