#include<stdio.h>

int main(){

    int n = 0;
    
    scanf("%d", &n);

    char ap[26] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 
                    'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 
                    'u', 'v', 'w', 'x', 'y', 'z'};

    int totaln = 0;

    for(int i = 0; i < n; i++){

        int  a[26] = {0,};
        char c[100];
        scanf("%s", &c);

        for(int j = 0; j < 26; j++){
            if(c[0] == ap[j]){
                a[j]++;
            }
        }

        int j = 1;
        while(c[j] != '\0'){
            for(int k = 0; k < 26; k++){
                if(c[j] == ap[k] && c[j-1] != ap[k]){
                    a[k]++;
                }
            }
            j++;
        }

        for(int l = 0 ; l < 26; l++){
            if(a[l] > 1){
                break;
            }
            if(l == 25){
                totaln++;
            }
        }

    }

    printf("%d", totaln);

    return 0;

}