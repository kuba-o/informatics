#include <iostream>
#include <cstdlib>
#include "Sequence.h"
#include "Sequence.cpp"

using namespace std;

int main(){
	Sequence s1, s2;
	s1.set(1,1);
	s1.set(2,2);
	s2.set(1,1);
	s2.set(2,2);
	
	Sequence s3;
	s3 = s1 + s2;
	cout<<s3.get(2)<<endl;

	bool s4;
	s4 = s1 == s2;
	cout<<s4<<endl;
	return 0;
}