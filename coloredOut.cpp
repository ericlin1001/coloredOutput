// Author:Eric Lin
// [ANSI escape code](https://en.wikipedia.org/wiki/ANSI_escape_code)
#include<iostream>
using namespace std;
int main(){
	//\033[1;31m is red.
	cout<<"\033[1;31mhello\033[0m"<<endl;
	// Testing different ways of escaping .
	cout<<"\e[1;31mhello\033[0m, normal"<<endl;
	cout<<"\e[91mhello"<<endl;
	cout<<"\e[0mReturn to normal Mode!"<<endl;
	return 0;
}
