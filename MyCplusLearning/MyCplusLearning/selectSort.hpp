//
//  selectSort.hpp
//  MyCplusLearning
//
//  Created by 张钊 on 2020/7/5.
//  Copyright © 2020 张钊. All rights reserved.
//

#ifndef selectSort_hpp
#define selectSort_hpp

#include <iostream>

template <class T>
void selectSort(T arr[], int n) {
    for(int i = 0; i < n - 1; i++) {
        int min_index = i;
        for(int j = i + 1; j < n; j++) {
            if(arr[min_index] > arr[j]) {
                min_index = j;
            }
        }
        std::swap(arr[i], arr[min_index]);
    }
}
#endif /* selectSort_hpp */
