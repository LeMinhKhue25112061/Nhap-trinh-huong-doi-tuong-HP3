#include <bits/stdc++.h>
using namespace std;

int main()
{
    // Ex 2.2.1
    double r = 5.0;
    double V = M_PI * pow(r, 3) * (4.0 / 3.0);
    cout << "1. The volume of a sphere with radius 5 is: " << V << endl;
    cout << "----------------------" << endl;
    // Ex 2.2.2
    double discount = 40.0 / 100.0;
    double ship = 3.0 + 0.75 * 59.0;
    double total = 24.95 * discount * 60.0 + ship;
    cout << "2. Total wholesale cost for 60 copies is: " << total << endl;
    cout << "----------------------" << endl;
    // Ex 2.2.3
    int ez_pace = (8 * 60 + 15) * 2; //990s
    int tempo = (7 * 60 + 12) * 3; // 1296s
    int rounded_h = (ez_pace + tempo + 52*60) / 3600;
    double mins = ((ez_pace + tempo + 52.0*60.0) / 3600.0 - rounded_h)*60;
    cout << "3. Get home at: " << 6 + rounded_h << ":" << mins <<" am"<< endl;
    return 0;
}