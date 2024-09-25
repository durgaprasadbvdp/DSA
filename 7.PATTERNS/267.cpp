/*
PATTERN - 115
267.Write a program to print the following pattern:
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
        for(int k = n-1;k>=i;k--)
            cout<<" ";

        for(int j = i; j >= 1 ; j--)
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