#include <iostream>
#include <vector>

#include <cassert>

using namespace std;

int main()
{
    
/*    try 
        throw 
        catch*/


    //cout << "Enter dog's age (in years): " << endl;
    //int dogAge;
    //cin >> dogAge;

    //while (dogAge < 0 or dogAge > 35)
    //{
    //    cout << "Dog's age must be between 0 and 35" << endl;
    //    cout << "Re-enter dog's age: " << endl;
    //    cin >> dogAge;
    //}

    //assert(dogAge > 0 and dogAge < 35);

    //cout << "This line?" << endl; 

    //vector<int> someInts;
    //someInts.pop_back();
    
    int divisor, dividend, quotient; 
    dividend = 32; 


    try
    {
        cin >> divisor;
        if (divisor == 0) {
            throw divisor; //this is called throwing an exception
        }
        quotient = dividend / divisor;
    }
    catch (int thrownInt)
    {
        cout << "Cannot divide by " << thrownInt << endl;
        cout << "Setting divisor to 1 and continuing program execution ..." << endl;
        divisor = 1;
    }

    cout << "This line of text is AFTER the try/catch" << endl; 

    return 0;
}