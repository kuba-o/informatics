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

	friend ostream& operator <<(ostream& s, const Sequence& seq){
		s<<endl;
		for (double d : seq.data){
			s<<" "<<d;
		}
		return s;
	}

	friend istream& operator >>(istream& s, Sequence& seq){
		int nr = 0;
		for (double& d : seq.data){
			cout<<"Enter element number "<<nr<<": ";
			nr++;
			s>>d;
		}
		return s;
	}	
};