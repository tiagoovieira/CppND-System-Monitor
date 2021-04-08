#include "processor.h"
#include "linux_parser.h"
#include <unistd.h>

// TODO: Return the aggregate CPU utilization
float Processor::Utilization() { 
  float totalJiffiesStart = LinuxParser::Jiffies();
  float activeJiffiesStart = LinuxParser::ActiveJiffies();
  
  usleep(100000); // microseconds --> 100 milliseconds
  
  float totalJiffiesEnd = LinuxParser::Jiffies();
  float activeJiffiesEnd = LinuxParser::ActiveJiffies();
  
  float totalDiff = totalJiffiesEnd - totalJiffiesStart;
  float activeDiff = activeJiffiesEnd - activeJiffiesStart;
  
  if (totalDiff == 0) {
    return 0.0;
  }
  
  return activeDiff / totalDiff; 
}