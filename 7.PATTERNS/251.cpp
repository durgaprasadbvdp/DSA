/*
PATTERN - 99
251.Write a program to print the following pattern:
	I/P : n = 5
    O/P :
    * * * * *
      * * * *
        * * *
          * *
            *
*/
#include<bits/stdc++.h>
using namespace std;
void patternPrint(int n)
{
	for(int i=n;i>=1;i--)
    {   
        for(int j = n-1;j>=i;j--)
            cout<<" "<<" ";
        
        for(int k=1;k<=i;k++)
            cout<<"*"<<" ";
            
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