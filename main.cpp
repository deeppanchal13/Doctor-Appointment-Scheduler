
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

    Doctor d1(101, "Dr. Sharma", "Cardiology");
    Doctor d2(102, "Dr. Verma", "Neurology");
    d1.displayDoctor();

    return 0;
}
