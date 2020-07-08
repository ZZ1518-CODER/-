//
//  threeWaysQuickSort.hpp
//  MyCplusLearning
//
//  Created by 张钊 on 2020/7/8.
//  Copyright © 2020 张钊. All rights reserved.
//

#ifndef threeWaysQuickSort_hpp
#define threeWaysQuickSort_hpp

#include <iostream>
#include <ctime>

template <class T>
void __threeWaysQuickSort(T arr[], int left, int right) {
    if(left >= right) {
        return;
    }
    std::swap(arr[left], arr[left + rand() % (right - left + 1)]);
    T elem = arr[left];
    int lt = left, rt = right + 1, vt = left + 1;
    while (vt < rt) {
        if(arr[vt] < elem) {
            lt++;
            std::swap(arr[vt], arr[lt]);
            vt++;
        }
        else if(arr[vt] > elem) {
            rt--;
            std::swap(arr[vt], arr[rt]);
        }
        else {
            vt++;
        }
    }
    std::swap(arr[left], arr[lt]);
    __threeWaysQuickSort(arr, left, lt - 1);
    __threeWaysQuickSort(arr, rt, right);
}


template <class T>
void threeWaysQuickSort(T arr[], const int n) {
    srand((unsigned int)(time(nullptr)));
    __threeWaysQuickSort(arr, 0, n - 1);
}

#endif /* threeWaysQuickSort_hpp */
