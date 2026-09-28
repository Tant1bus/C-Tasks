#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

bool is_in_square(double x, double y) {
	if ((x <= 1 || x >= -1) && (y <= 1 || y >= -1)) return true;
	else return false;
}
//int main() {
//	double x, y;
//	cin >> x >> y;
//	if (is_in_square) cout << "YES";
//	else cout << "NO";
//}

long long pow1(long long a, unsigned int p) {
	if (p < 2) return a;
	long long c;
	c = a;
	for (int i = 1; i < p; i++) {
		c *= a;
	}
	return c;
}
//int main() {
//	double x, y, z;	
//	cin >> x >> y >> z;
//	cout << pow1(x, 11) + pow1(y, 5) + pow1(z, 18);
//}

void cifra(int ax, int xa) {
	bool nf = true;
	while (ax > 9) {
		if (ax % 10 == xa) { cout << "YES"; nf = false; break; }
		ax /= 10;
	}
	if (nf) cout << "NO";
}

//int main() {
//	int ax, xa;
//	cin >> ax >> xa;
//	cifra(ax, xa);
//}

bool is_point_in_circle(double x, double y, double xc, double yc, double r) {
	return (((x - xc) * (x - xc) + (y - yc) * (y - yc)) < r * r);
}
//int main() {
//	double x, y, xc, yc, r;
//	cin >> x >> y >> xc >> yc >> r;
//	if (is_point_in_circle(x,y,xc,yc,r)) cout << "YES";
//	else cout << "NO";
//}

void triangle_stats(double A, double B, double C, double* area, double* perimeter) {
	*perimeter = A + B + C;
	double p = (A + B + C) / 2;
	*area = sqrt(p * (p - A) * (p - B) * (p - C));
}
//int main() {
//	double A, B, C;
//	cin >> A >> B >> C;
//	double area, perimeter;
//	triangle_stats(A, B, C, &area, &perimeter);
//	cout << fixed << setprecision(6) << area << "\n" << perimeter;
//}

double triangle_area( double a, double b, double c) {
	double pp = (a + b + c) / 2;
	return sqrt(pp * (pp - a) * (pp - b) * (pp - c));
}
double triangle_area(double x1, double y1, double x2, double y2, double x3, double y3) {
	double s = x1 * (y2 - y3) + x2 * (y3 - y1) + x3 * (y1 - y2);
	return fabs(s) / 2;
}
//
//int main() {
//	int p;
//	cin >> p;
//	if (p == 3) {
//		double a, b, c;
//		cin >> a >> b >> c;
//		cout << fixed << setprecision(4) << triangle_area(a,b,c);
//	}
//	else {
//		double x1, y1, x2, y2, x3, y3;
//		cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
//		cout << fixed << setprecision(4) << triangle_area(x1,y1,x2,y2,x3,y3);
//	}
//}