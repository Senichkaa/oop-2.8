//Fraction.h
#pragma once
#include <iostream>
#include <string>
#include <sstream>

using namespace std;

class Fraction
{
public:
	class LongLong
	{
	private:
		long a;
		unsigned long b;
	public:
		long get_a() const { return a; };
		unsigned long get_b() const { return b; };
		void set_a(long a) { this->a = a; };
		void set_b(unsigned long b) { this->b = b; };
		LongLong();
		LongLong(long, unsigned long);
		LongLong(const LongLong&);
		~LongLong();

		LongLong& operator = (const LongLong&);
		operator string() const;

		friend ostream& operator << (ostream&, const LongLong&);
		friend istream& operator >> (istream&, LongLong&);


		friend bool operator > (const LongLong& c1, const LongLong& c2);
		friend bool operator < (const LongLong& c1, const LongLong& c2);
		friend bool operator == (const LongLong& c1, const LongLong& c2);
		friend bool operator != (const LongLong& c1, const LongLong& c2);
		friend bool operator >= (const LongLong& c1, const LongLong& c2);
		friend bool operator <= (const LongLong& c1, const LongLong& c2);

	};
private:
	LongLong c;
	double d;
public:
	void set_c(LongLong c) { this->c = c; };
	void set_d(double d) { this->d = d; };
	LongLong get_c() const { return c; };
	double get_d() const { return d; };

	Fraction(LongLong = LongLong(0, 0), double = 0);
	Fraction(const Fraction&);
	~Fraction();


	Fraction& operator = (const Fraction&);
	operator string() const;

	friend ostream& operator << (ostream&, const Fraction&);
	friend istream& operator >> (istream&, Fraction&);


	friend bool operator > (const Fraction& c1, const Fraction& c2);
	friend bool operator < (const Fraction& c1, const Fraction& c2);
	friend bool operator == (const Fraction& c1, const Fraction& c2);
	friend bool operator != (const Fraction& c1, const Fraction& c2);
	friend bool operator >= (const Fraction& c1, const Fraction& c2);
	friend bool operator <= (const Fraction& c1, const Fraction& c2);

};

