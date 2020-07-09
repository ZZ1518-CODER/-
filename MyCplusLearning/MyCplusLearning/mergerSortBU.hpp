//
//  mergerSortBU.hpp
//  MyCplusLearning
//
//  Created by 张钊 on 2020/7/8.
//  Copyright © 2020 张钊. All rights reserved.
//

#ifndef mergerSortBU_hpp
#define mergerSortBU_hpp

#include <iostream>

template <class T>
void __mergeBU(T arr[], int left, int right, int mid) {
    T* arrTmp = new T[right - left + 1];
    for(int i = left; i <= right; i++) {
        arrTmp[i - left] = arr[i];
    }
    int l = left, r = mid + 1;
    for(int k = left; k <= right; k++){
        if(l > mid) {
            arr[k] = arrTmp[r - left];
            r++;
        }
        else if(r > right) {
            arr[k] = arrTmp[l - left];
            l++;
        }
        else if(arrTmp[l - left] > arrTmp[r - left]) {
            arr[k] = arrTmp[r - left];
            r++;
        }
        else {
            arr[k] = arrTmp[l - left];
            l++;
        }
    }
    delete [] arrTmp;
}

template <class T>
void mergerSortBU(T arr[], int n) {
    /*for(int i = 1; i < n; i *= 2) {
        for(int j = 0; j < n - i; j += i * 2) {
            int left = j;
            int right = std::min(j + i * 2 - 1, n - 1);
            int mid = j + i - 1;
            __mergeBU(arr, left, right, mid);
        }
    }*/
    
    

    for( int sz = 1; sz < n ; sz += sz )
        for( int i = 0 ; i < n - sz ; i += sz+sz )
            // 对于arr[mid] <= arr[mid+1]的情况,不进行merge
            if( arr[i+sz-1] > arr[i+sz] )
                __merge(arr, i, i+sz-1, std::min(i+sz+sz-1,n-1) );
}

#endif /* mergerSortBU_hpp */
