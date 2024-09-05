#include<stdio.h>
#include<stdlib.h>

int fib(int n);

int main(void) {
    int n;
    int i = 0;

    printf("Digite um numero: ");
    scanf("%i", &n);
    
    while (fib(i) < n){
        i++;
    }

    if (fib(i) == n){
        printf("Pertence a sequencia\n", n);
    }else{
        printf("Nao pertence a sequencia\n", n);
    }

    return 0;
}

int fib(int n) {
    if (n == 0) {
        return 0;
    } else if (n == 1) {
        return 1;
    } else {
        return fib(n - 1) + fib(n - 2);
    }
}