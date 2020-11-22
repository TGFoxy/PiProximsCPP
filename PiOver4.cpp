#include <iostream>
#include <cmath>
#include <iomanip>
#include <chrono>
using namespace std;
using namespace chrono;

int main()
{
	double s, t, range, x, y, total, pi;

	s = 0;
	t = 0;
	x = 1;
	y = 3;
	cout << "Please input the desired range" << endl;
	cin >> range;

	auto start = high_resolution_clock::now();

	for (x = 1; x < range; x += 4) {
		s += 1/x;
	}

	for (y = 3; y < range; y += 4) {
		t += 1 / y;
	}
	
	total = s - t;

	pi = total * 4;
	
	auto stop = high_resolution_clock::now();
	auto duration = duration_cast<microseconds>(stop - start);

	cout << "Pi is equal to " << setprecision(64) << pi << endl;
	cout << "That took " << duration.count() << " microseconds" << endl;
}
