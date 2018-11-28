//
//  main.c
//  Algorithm
//
//  Created by 王红庆 on 2018/11/23.
//  Copyright © 2018 王红庆. All rights reserved.
//

#include <stdio.h>
#include <math.h>

//void isSuShu;

// 检查一个数,是否是素数
void isSuShu(int a);
// 输出a以内的所有素数
void outputAllSuShu(int a);
// 打擂台算法

// 冒泡排序
//void bubbling();

int main(int argc, const char * argv[]) {
    
//    isSuShu(15);
//    outputAllSuShu(100);
    
    int i, j, num, count = 0;
    
    printf("请输入一个整数\n");
    scanf("%d", &num);
    for (i = 2; i <= num; i++) {
        for (j = 2; j < sqrt(i); j++) {
            if (i % j == 0) {
                break;
            }
        }
        if (j > sqrt(i)) {
            printf("%d\t", i);
            count++;
            if (count % 5 == 0) {
                printf("\n");
            }
        }
    }
    printf("素数有%d个\n", count);
    
    
    return 0;
}

void isSuShu(int a) {
    
    int i;
    
    /*
     * sqrt是开根号运算
     * 判断一个数是否是素数,不必非得从2除到本身,只除到sqrt(num)即可
     * 因为一个是num由两个数a,b相乘得到,那么a和b一定是一个在sqrt(num)前,一个在sqrt(num)之后
     */
    for (i = 2; i <= sqrt(a) ; i++) {
        if (a % i == 0) {
            break;
        }
    }
    /*
     * 这里要注意,上面的for循环,假如i条件是(i < 4),那么for循环执行完毕以后,i的值是5,因为最后要做一个++运算
     * 所以,如果都除完毕了还没有满足(a % i == 0)的话,那么i一定是大于sqrt(num)的
     */
    if (i > sqrt(a)) {
        printf("%d是素数\n", a);
    } else {
        printf("%d不是素数\n", a);
    }
}

void outputAllSuShu(int a) {
    
    int i, j;
    int count = 0;
    
    for (i = 2; i <= a; i++) {
        for (j = 2; j < sqrt(i); j++) {
            if (i % j == 0) {
                break;
            }
        }
        if (j > sqrt(i)) {
            printf("%d\t", i);
            count++;
            if (count % 5 == 0) {
                printf("\n");
            }
        }
    }
    printf("%d以内有%d个素数\n", a, count);
}
