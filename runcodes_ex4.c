


#include <stdio.h>

int comp2num(int num1, int num2) {

/*     return num1 >= num2 ? num1 : num2; */

    if(num1 >= num2) {
        return num1;
    } else {
        return num2;
    }
}

int main() {
    int a, b, c, maior;

    scanf("%d\n%d\n%d", &a, &b, &c);
    
    printf("%d eh maior", comp2num(a,comp2num(b,c)));

}
