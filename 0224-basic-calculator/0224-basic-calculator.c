int calculate(char* s) {
   static int stack[60000];
   int top=0;
   int result=0;
   int sign=1;
   long long n=0;
   for(int i=0;s[i]!='\0';i++)
   {
    char c=s[i];
    if(c>='0'&&c<='9')
    {
        n=n*10+(c-'0');
    }
    else if(c=='+'||c=='-')
    {
        result+=sign*n;
        n=0;
        sign=(c=='+')?1:-1;
    }
    else if(c=='(')
    {
        stack[top++]=result;
        stack[top++]=sign;
        result=0;
        sign=1;
    }
    else if(c==')')
    {
        result+=sign*n;
        n=0;
        int prevsign=stack[--top];
        int prevresult=stack[--top];
        result=prevresult+prevsign*result;
        sign=1;
    }
    }
    result+=sign*n;
    return result;
   } 