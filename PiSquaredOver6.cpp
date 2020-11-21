#include <iostream>
#include <iomanip>
#include <cmath>
#include <chrono>
using namespace std;
using namespace std::chrono;


int main()
{
    double x, range, s, pi_6, pi;
    x = 1;
    s = 0;
    cout << "Please input range \n";
    cin >> range;
    
    auto start = high_resolution_clock::now();

    for (x = 1; x < range; x+= 1) {
        s += (1 / (pow(x, 2)));
    }

    pi_6 = s * 6;
    pi = sqrt(pi_6);

    cout << "Pi is " << fixed << setprecision(64) << pi << endl;
    auto stop = high_resolution_clock::now();
    
    auto duration = duration_cast<microseconds>(stop - start);
    cout << "That took " << duration.count() << " microseconds" << endl;
}
