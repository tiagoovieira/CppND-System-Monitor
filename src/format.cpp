#include <string>
#include <iomanip>
#include "format.h"

using std::string;
using std::to_string;
#define HOUR_IN_SEC 3600
#define MIN_IN_SEC 60

// TODO: Complete this helper function
// INPUT: Long int measuring seconds
// OUTPUT: HH:MM:SS
// REMOVE: [[maybe_unused]] once you define the function
string Format::ElapsedTime(long seconds) { 
    long h = seconds / 3600;
  	long m = (seconds % 3600) / 60;
	long s = (seconds % 3600 % 60);
  	std::ostringstream elapsedTime;
  	elapsedTime << std::setw(2) << std::setfill('0') << h 
              	<< ":" << std::setw(2) << std::setfill('0') << m
              	<< ":" << std::setw(2) << std::setfill('0') << s;
  	return elapsedTime.str();
}