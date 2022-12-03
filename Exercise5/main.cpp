#include <cstdlib>
#include <iostream>
#include <math.h>

using namespace std;

const float g = 9.81, initialv = 0;
int t;

void gettime()
{
    cout << "Please enter the time in seconds." << endl;
    cin >> t ;
}
float mps_to_kmph(float mps)
{
    return (3.6 * mps);
}
int main(int argc, char *argv[])
{
    float s, v, t;
    void getTime(void);

    cout.setf (ios::fixed,ios::floatfield);

    cin >> t;
    while (t > 0) {

        s = initialv * t + (0.5 * g * pow(t, 2));
        v = initialv + (g * t);

        cout.precision (0);
        cout << "TIME IS: "<< t << "SECONDS and DISTANCE: "
             << s << "METERS THE VELOCITY IS: " << mps_to_kmph(v) <<
            "KILOMETERS PER SECOND.";
        cout. precision(1);
        return 0;

    }
    cout<< t << s << v;
}

