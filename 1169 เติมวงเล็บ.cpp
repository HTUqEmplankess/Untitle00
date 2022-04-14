#include<bits/stdc++.h>
using namespace std ;
int n=0;
char a[210];
stack <char> st ;
int main()
{
   scanf(" %s",a);
   int len=strlen(a);
   for(int i=0;i<len;i++)
   {
       if (a[i]=='(') st.push(a[i]);
       else
         if(!st.empty())st.pop();
         else n++;

   }
   printf("%d ",n+st.size());
   return 0;
}
