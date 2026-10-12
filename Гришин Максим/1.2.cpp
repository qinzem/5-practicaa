#include <iostream>
using namespace std;

int main()
{
    double X, Y;
    cin >> X >> Y;

    int day = 1;
    double current_sum = X;

    if (current_sum > Y)
    {
        cout << day;
        return 0;
    }

    while (true)
    {
        double next_sum = current_sum * 1.1;

        if (next_sum > Y)
        {
            day++;
            cout << day;
            break;
        }

        current_sum = next_sum;
        day++;
    }

    return 0;
}