#include <stdio.h>

int main()
{
    int a = 0, b = 0, c = 0,e=1; 
    char cand;

        while (1) {
        printf("Enter the Candidate you would like to vote for (A | B | C | 0): ");
        scanf(" %c",&cand);
        if (cand == 'a' || cand == 'A') {
            a += 1;
        }
        else if (cand == 'b' || cand == 'B') {
            b += 1;
        }
        else if (cand == 'c' || cand == 'C') {
            c += 1;
        }
        else{
           printf("Invalid Value\n");
           break;
         }
        printf("Enter '1' to continue voting or '0' to stop: ");
        scanf("%d",&e);
        if(e == 0){
        break;

    }
}
    printf("Candidate A: %d votes\n", a);
    printf("Candidate B: %d votes\n", b);
    printf("Candidate C: %d votes\n", c);


    if (a > b && a > c) {
        printf("The WINNER is Candidate A with %d votes!\n", a);
    }
    else if (b > a && b > c) {
        printf("The WINNER is Candidate B with %d votes!\n", b);
    }
    else if (c > a && c > b) {
        printf("The WINNER is Candidate C with %d votes!\n", c);
    }
    else {
        printf("The election resulted in a TIE.\n");
    }
    
    return 0; 
    }