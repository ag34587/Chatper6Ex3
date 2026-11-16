
#include <iostream>
#include <iomanip>
using namespace std;

// Function prototypes
double GetTime();
double DistanceFromTime(double time);
void ShowResults(double t, double d);

int main() {
    double time, distance;

    time = GetTime();
    distance = DistanceFromTime(time);
    ShowResults(time, distance);

    return 0;
}

double DistanceFromTime(double time) {
    const double gravity = 9.8;
    double distance = 0.5 * gravity * time * time;
    return distance;
}

double GetTime() {
    double time;
    cout << "Please enter the time it took the rock to hit the ground: ";
    cin >> time;
    return time;
}

void ShowResults(double t, double d) {
    cout << fixed << setprecision(2);
    cout << "It takes " << t << " seconds to fall a distance of " << d << " meters." << endl;
}