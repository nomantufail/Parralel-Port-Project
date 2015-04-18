#include <iostream>


#define DATA 0x378
#define STATUS 0x379
#define CONTROL 0x37a


short _stdcall Inp32(short portaddr);
void _stdcall Out32(short portaddr, short datum);

using namespace std;

int main(){
	cout<< "Hello";

	Out32(DATA, 4);
	int data = Inp32(DATA);
	cout<< data;
	
	
	data = Inp32(CONTROL);
	cout<< data;

	data = Inp32(STATUS);
	cout<< data;
	system("pause");
	return 0;
}