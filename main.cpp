#include <iostream>
using namespace std;

class Doctor
{
private:
    int doctorID, slots[5];
    string name, speciality;

public:
    Doctor(int id, string n, string s)
    {
        doctorID = id;
        name = n;
        speciality = s;

        for (int i = 0; i < 5; i++)
        {
            slots[i] = 0;
        }
    }

    void displayDoctor()
    {
        cout << "Doctor ID: " << doctorID << endl;
        cout << "Name: " << name << endl;
        cout << "Speciality: " << speciality << endl;
    }
};

int main()
{

    cout << "================================\n";
    cout << "  DOCTOR APPOINTMENT SCHEDULER\n";
    cout << "================================\n";

    cout << "1. Display Doctors\n";
    cout << "2. Book by Doctor ID and Slot\n";
    cout << "3. Book by Doctor Name and Time\n";
    cout << "4. Book by Speciality\n";
    cout << "5. Cancel Appointment\n";
    cout << "6. Display Daily Schedule\n";
    cout << "7. Exit\n";

    int choice;
    cout << "\nEnter your choice: ";
    cin >> choice;

    return 0;
}
