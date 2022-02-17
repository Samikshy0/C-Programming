// full mark = 100, 100, 100, 100, 100 
// sec mark  =  50,  40,  50,  90,  80

// ( sec mark / full mark ) * 100

#include <stdio.h>

int main() {
    float fm[5], sm[5], tm=0, ssm=0;
    float res = 0;
    
    for(int i=0; i<5; i++) {
        printf("\n\n\nFor subject %d \n\n", i+1);
        printf("Total mark:- ");
        scanf("%f",&fm[i]);
        printf("\nSecured mark:- ");
        scanf("%f",&sm[i]);

        tm = tm + fm[i];
        ssm = ssm + sm[i];
    }

    printf("\n\nFull mark:- %f\n", tm);
    printf("Secured mark:- %f\n", ssm);

    res = (ssm/tm) * 100;
    printf("\n\nYour percentage is:- %f", res);
    
 }
