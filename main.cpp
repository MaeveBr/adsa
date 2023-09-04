#include <iostream>
#include <vector>
#include "BubbleSort.h"
#include "Sort.h"
int main() {
  std::vector<int> a = {4,2,1,6};
  std::vector<int> b;
  Sort *S = new BubbleSort;
  b = S->sort(a);
  for(int i =0;i<b.size();i++){
    std::cout << b.at(i);
  }
}