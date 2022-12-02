#include<stdio.h>

#include<math.h>

int find_the_primes(int n,int arr[]);

float find_even_avg(int* even_s,int* even_c);

int main() {
    int n;

    scanf("%d",&n);

    int arr[n];

    int even_sum=0,even_count=0;

    for(int i=0; i<n; i++){

        scanf("%d",&arr[i]);

        if(arr[i]%2==0){

            even_sum+=arr[i];

            even_count++;

        }
    }

    int prime_count = find_the_primes(n,arr);

    printf("Prime numbers: %d\n",prime_count);

    float even_average = find_even_avg(&even_sum,&even_count);

    printf("Average of all positive integers: %.2f\n",even_average);

}

int find_the_primes(int n,int arr[]){
    int prime_nums=0;

    for(int i=0; i<n; i++){
        int f=1;
        if(*(arr+i)==2){
            f=1;
        }
        if(*(arr+i)<=1){
            f=0;
        }

        for(int j=2; j<=sqrt(*(arr+i)); j++){

            if(*(arr+i)%j ==0){
                f=0;
                break;
            }
        }

        if(f){
            prime_nums++;
        }
    }

    return prime_nums;

}

float find_even_avg(int* even_s,int* even_c){

    return (float)*even_s/(*even_c);

}

