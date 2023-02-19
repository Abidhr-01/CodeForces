#include <stdio.h>

int main (void) {
    int num1, value=0, i, j;
    char a[4];

    scanf("%d", &num1);

    gets(a);
    for(i=0 ; i<num1; i++ ) {
        gets(a);
        for(j=0 ; j<3 ; j++) {
            if(a[j]== '+') {
                value++;
                break;
            }
            else if(a[j]== '-') {
                value--;
                break;
            }
        }

    }


    printf("%d", value);

    return 0;
}
