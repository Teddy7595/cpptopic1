#include <iostream>
#include "./GetTimeBetweenLines.c"

int main(int argc, char const *argv[])
{
	timer.initMarkGetTime();
	timer.finishMarkGetTime();

	
	std::cout<<timer.getTotalTimeMark()<<std::endl;
	return 0;
}