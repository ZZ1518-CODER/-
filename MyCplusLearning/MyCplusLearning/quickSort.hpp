//
//  quickSort.hpp
//  MyCplusLearning
//
//  Created by 张钊 on 2020/7/6.
//  Copyright © 2020 张钊. All rights reserved.
//

#ifndef quickSort_hpp
#define quickSort_hpp

#include <iostream>
#include <random>
#include <ctime>

template <class T>
int __partition(T arr[], int left, int right) {
    //单路快速排序
    int randNum = left + rand() % (right - left + 1);
    std::swap(arr[randNum], arr[left]);
    T elem = arr[left];
    int index = left;
    for(int i = left + 1; i <= right; i++) {
        if(arr[i] < elem) {
            index++;
            std::swap(arr[index], arr[i]);
        }
    }
    std::swap(arr[left], arr[index]);
    return index;
}

template <class T>
void __quickSort(T arr[], int left, int right) {
    if(left >= right) {
        return;
    }
    int index = __partition(arr, left, right);
    __quickSort(arr, left, index - 1);
    __quickSort(arr, index + 1, right);
}

template <class T>
void quickSort(T arr[], int n) {
    srand((unsigned int)(time(nullptr)));
    __quickSort(arr, 0, n - 1);
    return;
}



#endif /* quickSort_hpp */
