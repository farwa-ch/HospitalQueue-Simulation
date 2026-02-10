#include <iostream>
using namespace std;

struct Patient {
    string name;
    int severity; // 1 = mild, 5 = critical
};

int main() {
    int n;
    cout << "Enter number of patients: ";
    cin >> n;

    Patient queue[n];
    for(int i = 0; i < n; i++) {
        cout << "Enter patient name and severity (1-5) for patient " << i+1 << ": ";
        cin >> queue[i].name >> queue[i].severity;
    }

    cout << "\nServing Patients in Queue:\n";
    for(int i = 0; i < n; i++) {
        cout << "Patient: " << queue[i].name 
             << " | Severity: " << queue[i].severity 
             << " -> Treated\n";
    }

    return 0;
}
