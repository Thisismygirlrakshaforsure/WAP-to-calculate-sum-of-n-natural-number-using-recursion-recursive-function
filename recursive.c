#include 
int sum (int);
int main()
{
    int n,s;
    printf("Enter any number");
    scanf("%d",&n);
    s = sum(n);
    printf("Sum is %d\n",s);
    return 0;
}
int sum (int n)
{
    if (n<=0)
        return 0;
    else
        return (n+sum(n-1));
}
