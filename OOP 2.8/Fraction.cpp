
//Fraction.cpp
#include <iostream>
#include <cmath>
#include <stdlib.h>
#include <string>
#include <sstream>
#include "Fraction.h"

//longlong/////////////////////////////////////////
Fraction::LongLong::LongLong()
{
	a = 0;
	b = 0;

}

Fraction::LongLong::LongLong(long x, unsigned long y)
{
	a = x;
	b = y;

}

Fraction::LongLong::LongLong(const LongLong& g)
{
	a = g.a;
	b = g.b;
	
}

Fraction::LongLong::~LongLong()
{
}

Fraction::LongLong& Fraction::LongLong::operator=(const LongLong& x)
{
	a = x.a;
	return *this;

}

Fraction::LongLong::operator string() const
{
	stringstream ss;
	ss << "a = " << a << endl;
	ss << "b = " << b << endl;

	return ss.str();

}

ostream& operator<<(ostream& out, const Fraction::LongLong& r)
{
	out << string(r);
	return out;
}


istream& operator>>(istream & in, Fraction::LongLong & r)
{
	cout << "A = "; in >> r.a;
	cout << "B = "; in >> r.b;
	cout << endl;
	return in;
}


bool operator>(const Fraction::LongLong& c1, const Fraction::LongLong& c2)
{
	return (c1.get_a() > c2.get_a() ||
		(c1.get_a() == c2.get_a() &&
			c1.get_b() > c2.get_b()));
	
}

bool operator<(const Fraction::LongLong& c1, const Fraction::LongLong& c2)
{
	return (c1.get_a() < c2.get_a() ||
		(c1.get_a() == c2.get_a() &&
			c1.get_b() < c2.get_b()));

}

bool operator==(const Fraction::LongLong& c1, const Fraction::LongLong& c2)
{
	return  c1.get_a() == c2.get_a() &&
		c1.get_b() == c2.get_b();

}

bool operator!=(const Fraction::LongLong& c1, const Fraction::LongLong& c2)
{
	return !(c1 == c2);
}

bool operator>=(const Fraction::LongLong& c1, const Fraction::LongLong& c2)
{
	return !(c1 < c2);
}

bool operator<=(const Fraction::LongLong& c1, const Fraction::LongLong& c2)
{
	return !(c1 > c2);
}
//fraction///////////////////////////////////
Fraction::Fraction(Fraction::LongLong ll, double dd)
{
	c = ll;
	d = dd;
}

Fraction::Fraction(const Fraction& g)
{
	c = g.c;
	d = g.d;
}

Fraction::~Fraction()
{
}

Fraction& Fraction::operator=(const Fraction& h)
{
	c = h.c;
	d = h.d;
	return *this;

}

Fraction::operator string() const
{
	stringstream sout, ss;
	ss << d;
	sout << ss.str().substr(ss.str().find('.'));
	return sout.str();

}

ostream& operator<<(ostream& out, const Fraction& r)
{
	out << string(r);
	return out;

}

istream& operator>>(istream& in, Fraction& r)
{
	cout << "c: " << endl; in >> r.c;
	cout << "d: " << endl; in >> r.d;
	cout << endl;
	return in;

}

bool operator>(const Fraction& c1, const Fraction& c2)
{
	return (c1.get_c() > c2.get_c() ||
		(c1.get_c() == c2.get_c() &&
			c1.get_d() > c2.get_d()));

}

bool operator<(const Fraction& c1, const Fraction& c2)
{
	return (c1.get_c() < c2.get_c() ||
		(c1.get_c() == c2.get_c() &&
			c1.get_d() < c2.get_d()));
	
}

bool operator==(const Fraction& c1, const Fraction& c2)
{
	return  c1.get_c() == c2.get_c() &&
		c1.get_d() == c2.get_d();

}

bool operator!=(const Fraction& c1, const Fraction& c2)
{
	return !(c1 == c2);
}

bool operator>=(const Fraction& c1, const Fraction& c2)
{
	return !(c1 < c2);
}

bool operator<=(const Fraction& c1, const Fraction& c2)
{
	return !(c1 > c2);
}
