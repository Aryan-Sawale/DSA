#include <iostream>

using namespace std;

class Test
{
public:
    Test(int a)
    {
        cout << a << endl;
        cout << "Test Constructor called" << endl;
    }
};

int main()
{
    Test *t = new Test(10); // Dynamically allocate a Test object
    if (t)
    {
        cout << "Object created successfully." << endl;
    }
    else
    {
        cout << "Failed to create object." << endl;
    }
    delete t; // Free the allocated memory
    return 0;
}
