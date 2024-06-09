#include <iostream>
using namespace std;

class carpark {
private:
    int carId;
    int chargePerHour;
    float ParkedTime;

public:
    void setDetails(int id,int time, int charge)
    {

        carId = id;
        chargePerHour = charge;
        ParkedTime = time;
    }
    int index(int id)
    {
        if (carId == id)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
    int totalCharge()
    {
        return ParkedTime * chargePerHour;
    }
    void showDetails()
    {
        cout << "Id\t\tCharge/hour\t\Parktimetime(in hours)\t\tTotal_charge" << endl;
        cout << carId << "\t\tRs." << chargePerHour << "\t\t\t\t" << ParkedTime << "\t\t\tRs." << totalCharge();
    }
};

int main() {

    int n,id2;
    cout << "Enter the number of cars: ";
    cin >> n;
    carpark c[n];



    // Input data for each car
    for (int i = 0; i < n; ++i) {
        cout << "\nEnter the data for car " << i + 1 << endl;

        int car_id, charge;
        float time;

        cout << "Car ID: ";
        cin >> car_id;

        cout << "Charge per hour: ";
        cin >> charge;

        cout << "Parked time (in hours): ";
        cin >> time;
        c[i].setDetails(car_id, charge,time);


    }

   cout << endl<<"Enter the id  whose report is to be displayed:";
    cin >> id2;
    int retVal;
    for (int i = 0; i < n; i++)
    {
        retVal = c[i].index(id2);
        if (retVal == 1)
        {
            c[i].showDetails();
            return 0;
        }
    }
    cout << "No such record found: ";
    return 0;
}
