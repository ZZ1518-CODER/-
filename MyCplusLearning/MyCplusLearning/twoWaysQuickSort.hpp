//
//  twoWaysQuickSort.hpp
//  MyCplusLearning
//
//  Created by 张钊 on 2020/7/8.
//  Copyright © 2020 张钊. All rights reserved.
//

#ifndef twoWaysQuickSort_hpp
#define twoWaysQuickSort_hpp

#include <iostream>
#include <ctime>

template <class T>
int __partition2(T arr[], int left, int right) {
    std::swap(arr[left], arr[rand() % (right - left + 1) + left]);
    T elem = arr[left];
    int lt = left + 1, rt = right;
    while(true) {
        while(lt <= right && arr[lt] < elem) {
            lt++;
        }
        while (rt >= left + 1 && arr[rt] > elem) {
            rt--;
        }
        if(lt > rt) {
            break;
        }
        std::swap(arr[lt], arr[rt]);
        lt++;
        rt--;
    }
    std::swap(arr[left], arr[lt - 1]);
    return lt - 1;
}


template <class T>
void __twoWaysQuickSort(T arr[], int left, int right) {
    if(left >= right) {
        return;
    }
    int index = __partition2(arr, left, right);
    __twoWaysQuickSort(arr, left, index - 1);
    __twoWaysQuickSort(arr, index + 1, right);
}

template <class T>
void twoWaysQucikSort(T arr[], int n) {
    srand((unsigned int)(time(nullptr)));
    __twoWaysQuickSort(arr, 0, n - 1);
}

#endif /* twoWaysQuickSort_hpp */
