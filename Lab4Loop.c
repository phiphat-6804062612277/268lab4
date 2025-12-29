#include <stdio.h>
int main(){
    char ca ;
    int n,r ;
    scanf("%c %d %d",&ca,&n,&r);
    for (int iv = 0;iv<r;++iv){
        for (int i=0;i<n;++i){
            printf("%c",ca);
        }
        printf("\n");
    }
    return 0;
}
