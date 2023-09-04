#include "Sort.h"
#include <iostream>
#include <vector>
#include "QuickSort.h"

std::vector<int> QuickSort::sort(std::vector<int> list){

void swap(int* a, int* b)
{
    int t = *a;
    *a = *b;
    *b = t;
}

// Partition the array using the last element as the pivot
int partition(std::vector<int> list)
{
      int p;
       if(list.size()>= 3){
          p = 3;
        }else{
          p = 2;
      }
    // Index of smaller element and indicates
    // the right position of pivot found so far
    int i = (p - 1);

    for (int j = list.at(1); j <= list.size() - 1; j++) {

        // If current element is smaller than the pivot
        if (list.at(j) < p) {

            // Increment index of smaller element
            i++;
            swap(list.at(i), list.at(j));
        }
    }
    swap(list.at(i + 1), list.size();
    return (i + 1);
}

{
    if (low < high) {

        // pi is partitioning index, arr[p]
        // is now at right place
        int pi = partition(arr, low, high);

        // Separately sort elements before
        // partition and after partition
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

// Driver code
  
};

