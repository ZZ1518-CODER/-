//
//  insertSort.hpp
//  MyCplusLearning
//
//  Created by 张钊 on 2020/7/6.
//  Copyright © 2020 张钊. All rights reserved.
//

#ifndef insertSort_hpp
#define insertSort_hpp

#include <iostream>
// 3 4 1
// elem = 1  314 134

template <class T>
void insertSort(T arr[], int n) {
    for(int i = 1; i < n; i++) {
        T elem = arr[i];
        for(int j = i - 1; j >= 0 && arr[j] > elem; j--) {
            std::swap(arr[j], arr[j + 1]);
        }
    }
    return;
}

#endif /* insertSort_hpp */
