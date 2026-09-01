#include <iostream>
using namespace std;

int main()
{
    int n;

    cout << "Readings entered : ";
    cin >> n;

    double readings[100];

    for(int i = 0; i < n; i++)
    {
        cin >> readings[i];
    }

    int errors = 0;
    int normal = 0;
    int warning = 0;
    int critical = 0;
    int shutdown = 0;

    double min = 0;
    double max = 0;
    double sum = 0;

    int validCount = 0;

    cout << "Valid readings   : ";

    for(int i = 0; i < n; i++)
    {
        if(readings[i] < 0)
        {
            errors++;
            continue;
        }

        cout << readings[i] << "  ";


        if(validCount == 0)
        {
            min = readings[i];
            max = readings[i];
        }

        if(readings[i] < min)
        {
            min = readings[i];
        }

        if(readings[i] > max)
        {
            max = readings[i];
        }

        sum = sum + readings[i];
        validCount++;

        if(readings[i] <= 29)
        {
            normal++;
        }
        else if(readings[i] <= 44)
        {
            warning++;
        }
        else if(readings[i] <= 59)
        {
            critical++;
        }
        else
        {
            shutdown++;
        }
    }

    cout << endl;

    int firstCritical = -1;

    for(int i = 0; i < n; i++)
    {
        if(readings[i] >= 45)
        {
            firstCritical = i;
            break;
        }
    }

    double average = sum / validCount;

    cout << "Skipped (errors) : " << errors << endl;

    if(firstCritical != -1)
    {
        cout << "First CRITICAL   : Index "
             << firstCritical
             << " -> "
             << readings[firstCritical]
             << "C" << endl;
    }
    else
    {
        cout << "First CRITICAL   : None" << endl;
    }

    cout << "Min : " << min
         << "C    Max : " << max
         << "C    Avg : " << average
         << "C" << endl;

    cout << "Normal:" << normal
         << "   Warning:" << warning
         << "   Critical:" << critical
         << "   Shutdown:" << shutdown
         << endl;

    return 0;
}
