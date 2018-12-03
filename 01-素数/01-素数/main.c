//
//  main.c
//  01-素数
//
//  Created by 王红庆 on 2018/11/30.
//  Copyright © 2018 王红庆. All rights reserved.
//

#include <stdio.h>
#include <math.h>

/// 判断是否是素数
void isPrime(int num);
/// 输出x以内的素数
void outOfAllPrime(int num);

int main(int argc, const char * argv[]) {
    
//    isPrime(5);
    outOfAllPrime(100);
    
    return 0;
}

void isPrime(int num) {
    
    int i;
    
    for (i = 2; i <= sqrt(num); i++) {
        if (num % i == 0) {
            break;
        }
    }
    if (i > sqrt(num)) {
        printf("%d是素数\n", num);
    } else {
        printf("%d不是素数\n", num);
    }
}

void outOfAllPrime(int num) {
    
    int i, j, count = 0;
    
    for (i = 2; i <= num; i++) {
        for (j = 2; j <= sqrt(i); j++) {
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
    
    printf("%d内有%d个素数\n", num, count);
}
