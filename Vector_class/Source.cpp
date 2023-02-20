#include "iostream"
#include "cmath"

using namespace std;

//class Vector
//{
//public:
//
//	Vector();
//	Vector(double a, double b);
//	~Vector();
//
//
//	void set_x(double user_x) {
//		x = user_x;
//	}
//	void set_y(double user_y) {
//		y = user_y;
//	}
//	double get_x() {
//		return x;
//	}
//	double get_y() {
//		return y;
//	}
//
//	Vector& operator + (const Vector& vect2) {
//		Vector vect_sum;
//		vect_sum.x = this->x + vect2.x;
//		vect_sum.y = this->y + vect2.y;
//		return vect_sum;
//		/*return Vector(this->x + vect2.x, this->y + vect2.y);*/
//	}
//
//	Vector operator * (double n);
//	Vector operator - ();
//	Vector operator - (const Vector& vect2);
//	void operator <<(ostream& os);
//	friend ostream& operator <<(ostream& os, const Vector& oter);
//
//private:
//	double x;
//	double y;
//};

//Vector::Vector()
//{
//	y = x = 0;
//}
//
//Vector::Vector(double a, double b)
//{
//	x = a;
//	y = b;
//}
//
//Vector Vector::operator * (double n) {
//	return Vector(this->x * n, this->y * n);
//}
//
//Vector Vector::operator - () {
//	return Vector(-x, -y);
//}
//
//Vector Vector::operator - (const Vector& vect2) {
//	return Vector(this->x - vect2.x, this->y - vect2.y);
//}
//
//void Vector::operator <<(ostream& os) {
//	os << "x=" << x << "y=" << y << endl;
//}
//
// ostream& operator <<(ostream& os,const Vector& other) {
//	os << "x=" << other.x << "y=" << other.y << endl;
//	return os;
// }
//
//Vector::~Vector()
//{
//}

class First
{
public:
	First();
	First(int x_) {
		x = x_;
	}
	~First();
	friend int Sum(First& f, Second& s);
private:
	int x;
};


class Second
{
public:
	Second();
	Second(int x_) {
		x = x_;
	}
	~Second();
	friend int Sum(First& f, Second& s);
private:
	int x;
};

int Sum(First& f, Second& s) {
	return f.x + s.x;
}


int main() 
{
	/*Vector a(1, 2);
	Vector b(3, 4);
	Vector c;
	int n = 2;
	c = a + b;
	c << cout;
	c = a - b;
	c << cout;
	c = a * n;
	c << cout;
	c = -a;
	c << cout;*/

	system("pause");
	return 0;
}