#include <stdio.h>
int main(){
	int score,A,B,C,D,F;
    A = 0 ,B=0,C=0,D=0,F=0;
    while (1){
	    scanf("%d",&score);
        if (score == -1){
            break;
        }
        //bonus2
	    if (score <= 100 && score >= 0){
		    if (score >= 68){
			    if (score >= 85){
                    A = A + 1;
				    printf("(A)");
                }
			    else if (score >= 75){
                    B = B + 1;
				    printf("(B)");
                }
			    else { 
                    C = C + 1;
				    printf("(C)");
			    }
		    }
		    else {
			    if (score >= 55){
                    D = D + 1;
				    printf("(D)");
                }
			    else {
                    F = F + 1;
				    printf("(F)");
                }
		    }
	    }
	    else 
	    	printf("error score");
		printf("\n");
    }
    printf("A(%d)\n",A);
    printf("B(%d)\n",B);
    printf("C(%d)\n",C);
    printf("D(%d)\n",D);
    printf("F(%d)",F);
    return 0;
}
