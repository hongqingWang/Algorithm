//
//  main.c
//  02-穷举法(换零钱算法)
//
//  Created by 王红庆 on 2018/11/30.
//  Copyright © 2018 王红庆. All rights reserved.
//

#include <stdio.h>

// 换零钱算法-穷举法(100元换成10元、20元、50元的零钱有多少种换法)
void changeMoney(void);

int main(int argc, const char * argv[]) {
    
    changeMoney();
    
    return 0;
}

void changeMoney() {
    
    // i-10元,j-20元,k-50元
    int i, j, k;
    for (i = 0; i <= 10; i++) {
        for (j = 0; j <= 5; j++) {
            for (k = 0; k <= 2; k++) {
                if (i * 10 + j * 20 + k * 50 == 100) {
                    printf("%d\t%d\t%d\n", i, j, k);
                }
            }
        }
    }
}
