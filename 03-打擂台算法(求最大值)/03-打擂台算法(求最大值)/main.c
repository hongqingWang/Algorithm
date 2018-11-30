//
//  main.c
//  03-打擂台算法(求最大值)
//
//  Created by 王红庆 on 2018/11/30.
//  Copyright © 2018 王红庆. All rights reserved.
//

#include <stdio.h>
#define MAXSIZE 10

int main(int argc, const char * argv[]) {
    
    int num[MAXSIZE];
    int max;
    
    printf("请输入%d个数字\n", MAXSIZE);
    
    for (int i = 0; i < MAXSIZE; i++) {
        scanf("%d", &num[i]);
    }
    max = num[0];
    for (int j = 0; j < MAXSIZE; j++) {
        if (max < num[j]) {
            max = num[j];
        }
    }
    
    printf("最大的数是%d\n", max);
    
    return 0;
}
