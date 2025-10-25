#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ll num_points;
    cout << "Enter number of random points: ";
    cin >> num_points;

    ll circlepoints = 0;
    double x, y;

    

    for (ll i = 0; i < num_points; i++)
    {
        // Generate random numbers between -1 and 1
        x = (double)rand() / RAND_MAX * 2.0 - 1.0;
        y = (double)rand() / RAND_MAX * 2.0 - 1.0;

        // Check if the point is inside the circle
        if (x * x + y * y <= 1)
        {
            circlepoints++;
        }
    }

    double pi = 4.0 * ((double)circlepoints / num_points);

    cout << "Total Points: " << num_points << endl;
    cout << "Points inside circle: " << circlepoints << endl;
    cout << "Estimated Pi = " << pi << endl;

    return 0;
}
