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
    FILE *fp1,*fp2;
    fp1=fopen("//Users//fq20161104605//Desktop//order//order1","w");
    fp2=fopen("//Users//fq20161104605//Desktop//order//order2","r");
    if(fp2==NULL)
    {
        printf("打开文件错误，要打开的文件可能不存在！");
    }
    for(i=0;i<10;i++)
    {
        fscanf(fp2,"%d",&a[i]);
    }
        
    printf("\n");
    for(i=0;i<9;i++)
        for(j=0;j<9-i;j++)
            if(a[j]>a[j+1])
            {
                t=a[j];
                a[j]=a[j+1];
                a[j+1]=t;
            }
    for(j=0;j<10;j++)
    {
        printf("%d ",a[j]);
        fprintf(fp1,"%d ",a[j]);
    }
    fprintf(fp1,"\n");
    printf("\n");
        return 0;
    
    }
