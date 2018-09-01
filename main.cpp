#include <iostream>

using namespace std;

int main()
{
    //input test score
    int testScore;
    cout << "Please enter your test score" << endl;
    cout << "____________________________" << endl;
    cin >> testScore;

    //switch statement to determine the grade
    switch (testScore){
    case  80 ... 100:
        cout << "A";
        break;
    case  75 ... 79:
        cout << "B+";
        break;
    case  70 ... 74:
        cout << "B";
        break;
    case  65 ... 69:
        cout << "C+";
        break;
    case  60 ... 64:
        cout <<  "C";
        break;
    case  55 ... 59:
        cout << "D+";
        break;
    case  50 ... 54:
        cout << "D";
        break;
    case  45 ... 49:
        cout << "E";
        break;
    // default case
    default:
        cout << "F" << endl;
        cout << "Resit needed";
    }

    return 0;
}
