#include <iostream>

using namespace std;

int main()
{
    double X, Y;

    if (cin >> X >> Y)
    {
        int day = 1;
        double current_sum = X;

        while (current_sum < Y)
        {
            current_sum = current_sum * 1.1;
            day++;
        }

        cout << day << endl;
    }

    return 0;
}



