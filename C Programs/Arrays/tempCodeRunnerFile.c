
        scanf("%d",&arr2[i]);
    }
    printf("The sum of the arrays is= \n");
    for(int i=0;i<5;i++){
        sum[i] = arr1[i] + arr2[i];
    }
    for(int i=0;i<5;i++){
        printf("%d\t",sum[i]);
    }
    return 0;