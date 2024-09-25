/*
PATTERN - 113
265.Write a program to print the following pattern:
	I/P : n = 5
    O/P :
          A
         B B
        C C C
       D D D D
      E E E E E
*/
#include<bits/stdc++.h>
using namespace std;
void patternPrint(int n)
{
	for(int i=1;i<=n;i++)
    {   
        for(int k = n-1;k>=i;k--)
            cout<<" ";

        for(int j = 0; j < i ; j++)
            cout<<(char)(i+64)<<" ";
            
        cout<<endl;
    }
}
int main()
{
	int n;
	cout<<"Enter the input number"<<endl;
	cin>>n;
	patternPrint(n);
return 0;
}