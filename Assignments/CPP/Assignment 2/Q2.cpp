#include <iostream>
#include <string>
using namespace std;

class Patient
{
private:
    int patientId;
    string name;
    int age;
    string ward;
    const string bloodGroup;

public:

    // Constructor 1 - Default
    Patient() : patientId(0), name("Unknown"), age(0), ward("General"), bloodGroup("O+")
    {
        cout << "[Constructor] Default patient registered." << endl;
    }

    // Constructor 2 - Emergency
    Patient(int id, const string& name) : patientId(id), name(name), age(0), ward("Emergency"), bloodGroup("O+")
    {
        cout << "[Constructor] Emergency: " << name << endl;
    }

    // Constructor 3 - Full admission
    Patient(int id, const string& name, int age, const string& ward, const string& bg)
        : patientId(id), name(name), age(age), ward(ward), bloodGroup(bg)
    {
        cout << "[Constructor] Full admission: " << name << endl;
    }

    // Destructor
    ~Patient()
    {
        cout << "[Destructor] Patient " << name << " discharged." << endl;
    }

    // Display patient record
    void displayRecord() const
    {
        cout << "Patient Record:" << endl;
        cout << "ID        : " << patientId << endl;
        cout << "Name      : " << name << endl;
        cout << "Age       : " << age << endl;
        cout << "Ward      : " << ward << endl;
        cout << "Blood Grp : " << bloodGroup << endl;
        cout << endl;
    }

    // Transfer ward
    void transferWard(const string& newWard)
    {
        cout << "Ward Transfer: " << name << " -> " << newWard << endl;
        ward = newWard;
    }
};

int main()
{
    // Three stack objects using different constructors

    Patient p1(1001, "Ritika Jadhav", 34, "Cardiology", "B+");

    Patient p2(1002, "Veer Shinde");

    Patient p3;


  
    cout << "\nCreating dynamic patient array...\n" << endl;

    Patient* patients = new Patient[4];



    cout << "\nDisplaying dynamic patients:\n" << endl;

    for(int i = 0; i < 4; i++)
    {
        patients[i].displayRecord();
    }


    // Transfer one patient's ward
    patients[1].transferWard("ICU");


    // Delete dynamic array
    cout << "\nDeleting dynamic patient array...\n" << endl;

    delete[] patients;


    // 6. Stack objects are destroyed automatically
    cout << "\nEnd of main. Stack objects will now be destroyed." << endl;

    return 0;
}