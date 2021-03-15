#include <iostream>

using namespace std;

double calculateCharges(double, double, double);

double charge = 12.00;
double extraCharge = 0.90;
double dayCharge = 20.00;

double chargeA = 0;
double chargeB = 0;
double chargeC = 0;

int main()
{
    double hours1, hours2, hours3;
    cout<<"Enter the hours of three cars parked"<<endl;
    cout<<"Car 1 hours: ";
    cin>>hours1;
    cout<<"Car 2 hours: ";
    cin>>hours2;
    cout<<"Car 3 hours: ";
    cin>>hours3;

    calculateCharges(hours1, hours2, hours3);

    return 0;
}
double calculateCharges(double hours1, double hours2, double hours3){
    double totalHours = 0;
    double totalCharges = 0;

    cout<<"Car \t\t\t Hours \t\t\t Charge"<<endl;


    // car1 charges
    if(hours1 <= 12){

        cout<<"1 \t\t\t "<<hours1<<" \t\t\t "<<charge<<endl;

        totalHours += hours1;
        totalCharges += charge;
    }
    else if(hours1 == 24){

        cout<<"1 \t\t\t "<<hours1<<" \t\t\t "<<dayCharge<<endl;

        totalHours += hours1;
        totalCharges += dayCharge;
    }
    else if(hours1 > 12){

        chargeA = charge + (hours1 - 12 * extraCharge);
        cout<<"1 \t\t\t "<<hours1<<" \t\t\t "<<chargeA<<endl;

        totalHours += hours1;
        totalCharges += chargeA;
    }

    // car2 charges
    if(hours2 <= 12){

        cout<<"2 \t\t\t "<<hours2<<" \t\t\t "<<charge<<endl;

        totalHours += hours2;
        totalCharges += charge;
    }
    else if(hours2 == 24){

        cout<<"2 \t\t\t "<<hours2<<" \t\t\t "<<dayCharge<<endl;

        totalHours += hours2;
        totalCharges += dayCharge;
    }
    else if(hours2 > 12){

        chargeB = charge + (hours2 - 12 * extraCharge);
        cout<<"2 \t\t\t "<<hours2<<" \t\t\t "<<chargeB<<endl;

        totalHours += hours2;
        totalCharges += chargeB;
    }

    // car3 charges
    if(hours3 <= 12){

        cout<<"3 \t\t\t "<<hours3<<" \t\t\t "<<charge<<endl;

        totalHours += hours3;
        totalCharges += charge;
    }
    else if(hours3 == 24){

        cout<<"3 \t\t\t "<<hours3<<" \t\t\t "<<dayCharge<<endl;

        totalHours += hours3;
        totalCharges += dayCharge;
    }
    else if(hours3 > 12){

        chargeC = charge + (hours3 - 12 * extraCharge);
        cout<<"3 \t\t\t "<<hours3<<" \t\t\t "<<chargeC<<endl;

        totalHours += hours3;
        totalCharges += chargeC;
    }

    cout<<"TOTAL \t\t\t "<<totalHours<<" \t\t\t "<<totalCharges<<endl;

    return hours1, hours2, hours3;
}
