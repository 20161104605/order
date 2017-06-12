//
//  main.c
//  order
//
//  Created by fuqiang on 17/6/12.
//  Copyright © 2017年 20161104605. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    int a[10],i,j,t;
    printf("input 10 number:\n");
    for(i=0;i<10;i++)
        scanf("%d",&a[i]);
    printf("\n");
    for(i=0;i<9;i++)
        for(j=0;j<9-i;j++)
            if(a[j]>a[j+1])
            {
                t=a[j];
                a[j]=a[j+1];
                a[j+1]=t;
            }
    printf("the sorted number:\n");
    for(i=0;i<10;i++)
        printf("%d",a[i]);
    return 0;
    
    }
