#pragma once
#include <iostream>
#include <cstdlib>

#define N 1024

using namespace std;

class Sequence{
public:
	double data[N];
	Sequence(void);
	~Sequence(void);
	Sequence(Sequence &obj);
	void setData(int i, double v);
	double get(int i);
	bool set(int i, double v);
	Sequence operator+(const Sequence& seq);
	Sequence operator+(double offset);
	double& operator [](int at) throw(int);
	Sequence& operator+=(const Sequence& seq);
	Sequence operator*(int m);
	bool operator==(const Sequence& seq);
};