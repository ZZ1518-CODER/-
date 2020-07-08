//
//  bubbleSort.hpp
//  MyCplusLearning
//
//  Created by 张钊 on 2020/7/6.
//  Copyright © 2020 张钊. All rights reserved.
//

#ifndef bubbleSort_hpp
#define bubbleSort_hpp

#include <iostream>

template <class T>
//比较两个相邻的数，如果左边比右边大，则交换位置
void bubbleSort(T arr[], const int n) {
    for(int i = 0; i < n - 1; i++) {
        for(int j = 0; j < n - i - 1; j++) {
            if(arr[j] > arr[j + 1]) {
                std::swap(arr[j], arr[j + 1]);
            }
        }
    }
}

#endif /* bubbleSort_hpp */
