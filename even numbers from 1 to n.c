//
//  Created by Mark Antonio on 3/13/20.
//  Copyright © 2020 Mark Antonio. All rights reserved.
//

#include <stdio.h>

void SumOfEvenNumbers(int arr[],int n){
    int sum=0;
    for(int i=0;i<n;i++){
        if (*arr%2==0) {
        sum += *arr;
        }
        arr++;
    }
    printf("from Function: sum is: %d \n",sum);
}
int main() {
    int n;
    printf("insert the value of n: ");
    scanf("%d",&n);
    //filling my array with the values from 1 to n
    int arr[n];
    for(int i=1;i<=n;i++){
        arr[i-1]=i;
    }
    SumOfEvenNumbers(&arr[0], n);
    
    //checking the array
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }

    return 0;
}
