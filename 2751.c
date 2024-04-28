#include<stdio.h>
#include<stdlib.h>

int compare(const void *a, const void *b){
    return (*(int*)a - *(int*)b);
}
int main(){

    int n = 0;
    scanf("%d", &n);
    int *arr =(int*)malloc(sizeof(int)*n);

    for(int i = 0; i < n; i++){
        scanf("%d", arr+i);
    }

    qsort(arr, n, sizeof(int), compare);

    for(int i = 0; i < n; i++){
        printf("%d\n", *(arr+i));
    }

    free(arr);

    return 0;
    
}
