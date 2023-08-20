#include <stdio.h>

int main(){
    char isb[10];
    scanf(" %s",isb);
    int idx = 0;
    int result;
    for(int i=10;i>1;i--){
        int digit = isb[idx]-'0';
        int p = i * digit;
        result += p;
        idx++;

    }
    printf("%d",result);
}
