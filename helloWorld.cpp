


//////////////////////////////////////////////////////////////////////////////////////////////////////
//
//                                        Steve's hello world app in GitHub
//                                           Written by: Steve Flowers
//                                             Date:  Feb/6/2017
//
/////////////////////////////////////////////////////////////////////////////////////////////////////
#include <iostream>

using namespace std;
int main()
{
	std::cout << "hello world!\n";				//std::cout means that the program will display text to the console
								//since we #include(ed)<iostream> technically we don't need the std::
								//prefix - however some programmers enjoy the extra typing*cough*dad*
	cout << "This works as well!" << endl;
	system("pause");					//"system" invokes the command processor to issue some command - in this
								//case it's telling the application to hold the text on the console screen
								//until we get input from the keyboard.
	
	cout << "test 2" << endl;
	
	return 0;
}
