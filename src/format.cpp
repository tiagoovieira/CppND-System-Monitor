#include <string>

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
    int hh, mm, ss;
    string time;

    hh = seconds / HOUR_IN_SEC;
    seconds = seconds % HOUR_IN_SEC;
    mm = seconds / MIN_IN_SEC;
    ss = seconds % MIN_IN_SEC;

    if(hh < 10) { time = "0"; }
    time += to_string(hh) + ":";

    if(mm < 10) { time += "0"; }
    time += to_string(mm) + ":";

    if(ss < 10) { time += "0"; }
    time += to_string(ss);

    return time; 
}