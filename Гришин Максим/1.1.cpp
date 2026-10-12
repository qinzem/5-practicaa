#include <iostream>
using namespace std;

int main()
{
    double X, Y;
    cin >> X >> Y;

    int day = 1;
    double sum = X;

    if (sum < Y)
    {
        do
        {
            sum = sum + sum * 0.1;
            day = day + 1;
        } while (sum < Y);
    }

    cout << day;
    return 0;
}

