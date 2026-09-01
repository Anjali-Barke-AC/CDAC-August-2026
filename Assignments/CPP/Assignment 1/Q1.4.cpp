#include <iostream>
#include <cstdlib>

using namespace std;

int main(int argc, char *argv[])
{
    // Check for missing arguments
    if(argc != 4)
    {
        cout << "Usage   : ./sensor_monitor" << endl;
        cout << "Error   : Missing arguments." << endl;

        return 1;
    }

    int warn = atoi(argv[1]);
    int critical = atoi(argv[2]);
    int num_readings = atoi(argv[3]);

    if(warn >= critical)
    {
        cout << "Error   : Warn threshold must be less than critical threshold." << endl;
        return 1;
    }


    if(num_readings < 1 || num_readings > 500)
    {
        cout << "Error   : Number of readings must be between 1 and 500." << endl;
        return 1;
    }

    int normal = 0;
    int warning = 0;
    int criticalCount = 0;
    int shutdown = 0;

    for(int i = 0; i < num_readings; i++)
    {
        int temperature = rand() % 70;

        if(temperature < warn)
        {
            normal++;
        }
        else if(temperature < critical)
        {
            warning++;
        }
        else if(temperature < 60)
        {
            criticalCount++;
        }
        else
        {
            shutdown++;
        }
    }

    cout << "Config  : Warn=" << warn << "°C"
         << "  Critical=" << critical << "°C"
         << "  Readings=" << num_readings << endl;

    cout << "Results : Normal:" << normal
         << "  Warning:" << warning
         << "  Critical:" << criticalCount
         << "  Shutdown:" << shutdown << endl;

    return 0;
}