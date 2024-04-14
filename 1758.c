#include <stdio.h>
#include <stdlib.h>

int compare(const void* a, const void* b){
    return *(int*)b - *(int*)a;
}

int main(){

    int n;
    int long long tip=0;
    int ht[100000];

    scanf("%d", &n);

    for(int i=0; i<n; i++){
        scanf("%d", &ht[i]);
    }

    qsort(ht, n, sizeof(int), compare);

    for(int i=0; i<n; i++){
        if(ht[i] - i < 0) break;
        tip = tip + ht[i] - i;
        
    }

    printf("%lld", tip);

    return 0;
}