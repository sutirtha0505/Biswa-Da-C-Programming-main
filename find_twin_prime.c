//find twin Prime within a range
#include<stdio.h>

int prime(int num) {
    int count = 0;
    for(int i = 1; i <= num; i++) {
        if(num % i == 0) {
            count++;
        }
    }
    return count == 2; // Returns 1 if prime, 0 otherwise
}

int main() {
    int s, e;
    printf("Enter starting Point : ");
    scanf("%d", &s);
    printf("Enter ending Point : ");
    scanf("%d", &e);

    int prev = 0; // Initialize prev as 0, which will not match any prime initially

    for(int i = s; i <= e; i++) {
        if(prime(i)) {
            if(prev == 0) { // First prime found, no previous prime to compare yet
                prev = i;
            } else {
                if(i - prev == 2) { 
                    // Check if the current and previous primes are twin primes
                    printf("(%d, %d)\n", prev, i); // Print the twin primes
                }
                prev = i; // Update prev to the current prime for next iteration
            }
        }
    }
    return 0;
}
//check tw0 user defined number
#include<stdio.h>
int prime(int n){
    int count=0;
    for(int i=1;i<=n;i++){
        if(n%i==0){
            count++;
        }
    }
    if(count==2){
        return 1;
    }
    else{
        return 0;
    }
}
int main(){
    int n1,n2;
    printf("Enter First Number : ");
    scanf("%d",&n1);
    printf("Enter Second Number : ");
    scanf("%d",&n2);
    if(n1-n2==2||n2-n1==2){
        if(prime(n1)&&prime(n2)){
            printf("%d and %d is twin Prime Number ",n1,n2);
        }
        else{
            printf("%d and %d is not twin Prime Number ",n1,n2);
        }
    }
    else{
        printf("%d and %d is not twin Prime Number ",n1,n2);
    }
}
