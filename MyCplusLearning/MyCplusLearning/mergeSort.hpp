//
//  mergeSort.hpp
//  MyCplusLearning
//
//  Created by 张钊 on 2020/7/6.
//  Copyright © 2020 张钊. All rights reserved.
//

#ifndef mergeSort_hpp
#define mergeSort_hpp

#include <iostream>

template <class T>
void __merge(T arr[], int left, int right, int mid) {
    T arrTmp[right - left + 1];
    for(int i = left; i <= right; i++) {
        arrTmp[i - left] = arr[i];
    }
    int l1 = left, l2 = mid + 1;
    for(int k = left; k <= right; k++) {
        if(l1 > mid) {
            arr[k] = arrTmp[l2 - left];
            l2++;
        }
        else if(l2 > right) {
            arr[k] = arrTmp[l1 - left];
            l1++;
        }
        else if(arrTmp[l1 - left] > arrTmp[l2 - left]) {
            arr[k] = arrTmp[l2 - left];
            l2++;
        }
        else {
            arr[k] = arrTmp[l1 - left];
            l1++;
        }
    }
}

template <class T>
void __mergeSort(T arr[], int left, int right) {
    if(left >= right) {
        return;
    }
    
    int mid = left + (right - left) / 2;
    __mergeSort(arr, left, mid);
    __mergeSort(arr, mid + 1, right);
    __merge(arr, left, right, mid);
    
}

template <class T>
void mergeSort(T arr[], int n) {
    __mergeSort(arr, 0, n - 1);
}

#endif /* mergeSort_hpp */
