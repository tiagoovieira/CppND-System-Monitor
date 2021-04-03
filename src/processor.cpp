#include "processor.h"
#include "linux_parser.h"
#include <unistd.h>

// TODO: Return the aggregate CPU utilization
float Processor::Utilization() { 
  long totalJiffiesStart = LinuxParser::Jiffies();
  long activeJiffiesStart = LinuxParser::ActiveJiffies();
  
  usleep(100000); // microseconds --> 100 milliseconds
  
  long totalJiffiesEnd = LinuxParser::Jiffies();
  long activeJiffiesEnd = LinuxParser::ActiveJiffies();
  
  long totalDiff = totalJiffiesEnd - totalJiffiesStart;
  long activeDiff = activeJiffiesEnd - activeJiffiesStart;
  
  if (totalDiff == 0) {
    return 0.0;
  }
  
  return float(activeDiff) / float(totalDiff); 
}