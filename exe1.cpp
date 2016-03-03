#include <iostream>
#include <cstdlib>
#include "Sequence.h"

using namespace std;

int main(){
	Sequence sequence;
	cout<<"tu sie stworzylo bez napisu"<<endl;
	Sequence test;
	test.hi();
	sequence.hi();
	sequence.hi2();
	sequence.set(1,2);
	cout<<sequence.get(3)<<"throw"<<endl;
	cout<<sequence.get(1)<<"OK"<<endl;

	// cout<<seq.data[2]<<endl;
	return 0;
}