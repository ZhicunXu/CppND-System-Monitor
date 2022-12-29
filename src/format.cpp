#include <string>

#include "format.h"

using std::string;

// TODO: Complete this helper function
// INPUT: Long int measuring seconds
// OUTPUT: HH:MM:SS
// REMOVE: [[maybe_unused]] once you define the function
string Format::ElapsedTime(long seconds) { 
  long hours = seconds / 3600;
  seconds = seconds % 3600;
  long mins = seconds / 60;
  seconds = seconds % 60;
   
  string hh = hours < 10 ? '0' + std::to_string(hours) : std::to_string(hours);
  string mm = mins < 10 ? '0' + std::to_string(mins) : std::to_string(mins);
  string ss = seconds < 10 ? '0' + std::to_string(seconds) : std::to_string(seconds);

  return hh + ":" + mm + ":" + ss; 
}