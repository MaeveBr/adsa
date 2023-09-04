#include <iostream>
#include <vector>
#ifndef SORT
#define SORT
class Sort{
  public:
   virtual std::vector<int> sort(std::vector<int> list) = 0;
};
#endif