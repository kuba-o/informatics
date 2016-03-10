#include <iostream>
#include <cstdlib>
#include <cstring>
#include "Sequence.h"

using namespace std;

Sequence::~Sequence(void){}

void Sequence::hi2(){cout<<"DZIALA"<<endl;}
void Sequence::hi(){cout<<"TEST";}

bool Sequence::set(int i, double v){
	if (i>=0 && i <N){
		data[i]=v;
		return true;
	} else{
		return false;
	}
}

double Sequence::get(int i){
	if (i>=0 && i <N){
		return data[i];
	} else{
		throw i;
	}	
}

Sequence::Sequence(void){ cout<< "constructor" <<endl;}

Sequence Sequence::operator + (const Sequence& seq){
	Sequence tmp;
	for (int i=0; i<N; ++i){
		tmp.data[i] = this->data[i] + seq.data[i];
	}
	return tmp;
}