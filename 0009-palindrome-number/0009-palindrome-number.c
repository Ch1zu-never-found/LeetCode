bool isPalindrome(int x) {
    int i=x,r;
    long long rev=0;
    if(x<0|| (x % 10 == 0 && x != 0))
     {
        return false;
     }
    while(x>0)
    {
        r=x%10;
        rev=(rev*10)+r;
        x=x/10;
    }
    if(rev==i)
    return true;
    else
    return false;
}