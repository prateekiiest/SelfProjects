#include <iostream>
#include <string>
#include <iomanip>
#include <ios>
#include <sstream>
using namespace std;
using std::setprecision;
using std::streamsize;


int main()
{
    double pi = atan(1)*4;
    int input = 0;
    while(true)
    {
        cout << "Please enter how many digits of PI you would like to see (Max 20): ";
        cin >> input;
        if(input > 0 && input <= 20)
        {
            break;
        }
        else
        {
            cout << "That's not a valid number! Try again." << endl;
        }
    }
    streamsize prec = cout.precision();
    cout << setprecision(input);
    cout << "Here you go: " << pi <<endl;
    system("pause");
}
