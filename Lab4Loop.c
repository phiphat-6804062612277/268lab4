#include <stdio.h>
int main(){
    char ca ;
    int n ;
    scanf("%c %d",&ca,&n);
    for (int iv = 0;iv<n;++iv){
        for (int i=0;i<n;++i){
            printf("%c",ca);
        }
        printf("\n");
    }
    return 0;
}
