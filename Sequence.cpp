#include <iostream>
#include <cstdlib>
#include <cstring>
#include "Sequence.h"

using namespace std;

Sequence::~Sequence(void){}

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

Sequence::Sequence(void){}

Sequence Sequence::operator + (const Sequence& seq){
	Sequence tmp;
	for (int i=0; i<N; ++i){
		tmp.data[i] = this->data[i] + seq.data[i];
	}
	return tmp;
}

bool Sequence::operator == (const Sequence& seq){
	Sequence tmp;
	for (int i=0; i<N; ++i){
		if (this->data[i] != seq.data[i]){
			return false;
		}
	}
	return true;
}

Sequence Sequence::operator * (int m){
	Sequence tmp;
	for (int i=0; i<N; i++){
		this->data[i]*=m;
	}
	return tmp;
}