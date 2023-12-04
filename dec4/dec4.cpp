#include <iostream>

using namespace std;

int main()
{
    string text = "alpha beta";

    try
    {
        string substring = text.substr(20, 10);
    }

    catch (exception e)
    {
        cout << e.what() << endl; 
    }



    return 0;
}