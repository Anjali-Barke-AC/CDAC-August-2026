#include <iostream>
using namespace std;

int main()
{
    float temp[3][3];

    cout << "Enter temperatures for 9 rooms:\n";

    for(int i = 0; i < 3; i++)
    {
        cout << "Floor " << i + 1 << ":\n";

        for(int j = 0; j < 3; j++)
        {
            cout << "Room " << j + 1 << ": ";
            cin >> temp[i][j];
        }
    }

    cout << "\nRoom1\tRoom2\tRoom3\n";

    for(int i = 0; i < 3; i++)
    {
        cout << "Floor " << i + 1 << " : ";

        for(int j = 0; j < 3; j++)
        {
            cout << temp[i][j] << "\t";
        }

        cout << endl;
    }


    float hottest = temp[0][0];
    int hottestFloor = 0;
    int hottestRoom = 0;

    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            if(temp[i][j] > hottest)
            {
                hottest = temp[i][j];
                hottestFloor = i;
                hottestRoom = j;
            }
        }
    }

    cout << "\nHottest Room : Floor " << hottestFloor + 1
         << ", Room " << hottestRoom + 1
         << " -> " << hottest << " C\n";


    float highestAverage = 0;
    int hottestFloorNumber = 0;

    for(int i = 0; i < 3; i++)
    {
        float sum = 0;

        for(int j = 0; j < 3; j++)
        {
            sum = sum + temp[i][j];
        }

        float average = sum / 3;

        if(average > highestAverage)
        {
            highestAverage = average;
            hottestFloorNumber = i;
        }
    }

    cout << "Hottest Floor : Floor " << hottestFloorNumber + 1
         << " (avg " << highestAverage << " C)\n";


    int warningCount = 0;

    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            if(temp[i][j] >= 30)
            {
                warningCount++;
            }
        }
    }

    cout << "Rooms at WARNING or above : " << warningCount << endl;

    return 0;
}