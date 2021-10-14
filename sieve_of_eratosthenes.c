//sieve of eratosthenes to find out the prime numbers
#include<stdio.h>
void primeSieve(int n)
{
    int prime[100]={0};
    int i, j;
    for(i=2; i<=n; i++)
    {
        if(prime[i]==0) //unmarked --> prime
        {
            for(j=i*i; j<=n; j=j+i)
            {
                prime[j]=1; //marked --> not prime
            }
        }
    }
    // for(i=2; i<=n; i++)
    //     printf("%d ", prime[i]);
    // printf("\n");
    for(i=2; i<=n; i++)
    {
        if(prime[i]==0)
            printf("%d ", i);
    }
    printf("\n");
}
int main()
{
    int n;
    printf("enter number : ");
    scanf("%d", &n);
    primeSieve(n);
    return 0;
}