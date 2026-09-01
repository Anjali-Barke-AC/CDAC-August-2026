#include <iostream>
using namespace std;

int main()
{
    double temperature;
    int statusCode;

    cout << "Enter temperature: ";
    cin >> temperature;

    if (temperature < 0)
    {
        statusCode = -1;
    }
    else if (temperature <= 29)
    {
        statusCode = 0;
    }
    else if (temperature <= 44)
    {
        statusCode = 1;
    }
    else if (temperature <= 59)
    {
        statusCode = 2;
    }
    else
    {
        statusCode = 3;
    }

    double fahrenheit = (temperature * 9 / 5) + 32;

    cout << "Temperature : " << temperature << "°C  /  "
         << fahrenheit << "°F" << endl;


    cout << "Status      : ";

    switch (statusCode)
    {
        case -1:
            cout << "SENSOR_ERROR" << endl;
            cout << "Action      : Sensor fault — check wiring" << endl;
            break;

        case 0:
            cout << "NORMAL" << endl;
            cout << "Action      : No action required" << endl;
            break;

        case 1:
            cout << "WARNING" << endl;
            cout << "Action      : Alert sent to supervisor" << endl;
            break;

        case 2:
            cout << "CRITICAL" << endl;
            cout << "Action      : Cooling system triggered" << endl;
            break;

        case 3:
            cout << "SHUTDOWN" << endl;
            cout << "Action      : Emergency shutdown initiated" << endl;
            break;
    }

    cout << "Reading     : "
         << (temperature > 25 ? "Above Average" : "Below Average")
         << endl;

    return 0;
}

