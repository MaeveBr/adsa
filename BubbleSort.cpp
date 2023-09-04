#include <iostream>
#include <vector>
#include "BubbleSort.h"
#include "Sort.h"
BubbleSort::BubbleSort(){
  
};
std::vector<int> BubbleSort::sort(std::vector<int> list){
  int dummy;
  for (int i = 0;i<list.size()-1;i++){
    for(int j = i+1;j<list.size();j++){
          if(list.at(i)>list.at(j)){
            
           dummy = list.at(j);
           list.at(j) = list.at(i);
           list.at(i) = dummy;
       }
    }
  }
  return list;
};