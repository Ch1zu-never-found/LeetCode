int reverse(int x){
long long rev=0;
int r;
while(x!=0)
{
    r=x%10;
    rev=r+(10*rev);
    x=x/10;
}
 if (rev > INT_MAX || rev < INT_MIN)
    {
        return 0;
    }

    return (int)rev;
}
