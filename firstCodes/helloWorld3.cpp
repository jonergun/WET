#include <iostream>
using namespace::std;

//use argc & argv to get inputs from users
int main(int argc, char *argv[])
{
	if(argc > 1) {
		cout<<"Hello "<<argv[1]<<endl;
	}
	else {
		cout<<"Hello stranger"<<endl;
	}
	return (0);
}
