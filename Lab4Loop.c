#include <stdio.h>
int main(){
	int score;
    while (1){
	    scanf("%d",&score);
        if (score == -1){
            break;
        }
        //bonus2
	    if (score <= 100 && score >= 0){
		    if (score >= 68){
			    if (score >= 85)
				    printf("(A)");
			    else if (score >= 75)
				    printf("(B)");
			    else { 
				    printf("(C)");
			    }
		    }
		    else {
			    if (score >= 55)
				    printf("(D)");
			    else 
				    printf("(F)");
		    }
	    }
	    else 
	    	printf("error score");
		printf("\n");
    }
    return 0;
}
