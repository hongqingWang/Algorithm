//
//  main.c
//  04-冒泡排序
//
//  Created by 王红庆 on 2018/11/30.
//  Copyright © 2018 王红庆. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    int arr[5] = {5, 4, 3, 2, 1};
    int total = 5;
    int temp;
    
    for (int i = 1; i < total; i++) {
        for (int j = 0; j < total - i; j++) {
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    
    for (int i = 0; i < total; i++) {
        printf("%d\t", arr[i]);
    }
    printf("\n");
    
    return 0;
}
