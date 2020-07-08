//
//  sortTestHelper.hpp
//  MyCplusLearning
//
//  Created by 张钊 on 2020/7/6.
//  Copyright © 2020 张钊. All rights reserved.
//

#ifndef sortTestHelper_hpp
#define sortTestHelper_hpp

#include <iostream>
#include <random>
#include <ctime>
#include <string>
#include <cassert>
namespace sortTestHelper {

int* generateRandomArray(const int n, const int left, const int right) {
    int* arr = new int[n];
    srand((unsigned int)(time(nullptr)));
    for(int i = 0; i < n; i++) {
        arr[i] = rand() % (right - left + 1) + left;
    }
    return arr;
}


int* copyArray(int arr[], const int n) {
    int* arrtmp = new int[n];
    for(int i = 0; i < n; i++) {
        arrtmp[i] = arr[i];
    }
    return arrtmp;
}

template <class T>
bool isSorted(T arr[], int n) {
    for(int i = 0; i < n - 1; i++) {
        if(arr[i] > arr[i + 1]) {
            return false;
        }
    }
    return true;
}

template <class T>
void sortTest(const std::string& sortname, void (*sort)(T arr[], int n), T arr[], int n) {
    clock_t start_time = clock();
    sort(arr, n);
    std::cout << sortname << ": takes " << (double)(clock() - start_time) / CLOCKS_PER_SEC << "s" << std::endl;
    assert(isSorted(arr, n));
    return;
}

}

#endif /* sortTestHelper_hpp */
