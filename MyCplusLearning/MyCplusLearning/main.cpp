//
//  main.cpp
//  MyCplusLearning
//
//  Created by 张钊 on 2020/7/5.
//  Copyright © 2020 张钊. All rights reserved.
//

#include <iostream>
#include "selectSort.hpp"
#include "insertSort.hpp"
#include "quickSort.hpp"
#include "mergeSort.hpp"
#include "bubbleSort.hpp"
#include "sortTestHelper.hpp"
#include "twoWaysQuickSort.hpp"
#include "threeWaysQuickSort.hpp"
int main(int argc, const char * argv[]) {
    // insert code here...
    int arr[]{8, 9, 7, 6, 5, 4};
    bubbleSort<int>(arr, 6);
    for(int i = 0; i < 6; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
    std::cout << "Hello, World!\n";
    int* arr1 = sortTestHelper::generateRandomArray(100000, 0, 99);
    int* arr2 = sortTestHelper::copyArray(arr1, 100000);
    int* arr3 = sortTestHelper::copyArray(arr1, 100000);
    int* arr4 = sortTestHelper::copyArray(arr1, 100000);
    int* arr5 = sortTestHelper::copyArray(arr1, 100000);
    int* arr6 = sortTestHelper::copyArray(arr1, 100000);
    int* arr7 = sortTestHelper::copyArray(arr1, 100000);
    sortTestHelper::sortTest("insertSort", insertSort<int>, arr1, 100000);
    sortTestHelper::sortTest("selectSort", selectSort<int>, arr2, 100000);
    sortTestHelper::sortTest("bubbleSort", bubbleSort<int>, arr3, 100000);
    sortTestHelper::sortTest("mergeSort", mergeSort<int>, arr4, 100000);
    sortTestHelper::sortTest("quickSort", quickSort<int>, arr5, 100000);
    sortTestHelper::sortTest("twowaysquickSort", twoWaysQucikSort<int>, arr6, 100000);
    sortTestHelper::sortTest("threewaysquickSort", threeWaysQuickSort<int>, arr7, 100000);
    return 0;
}
