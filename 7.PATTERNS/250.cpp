/*
PATTERN - 98
250.Write a program to print the following pattern:
	I/P : n = 5
    O/P :
            E
          D D
        C C C
      B B B B
    A A A A A 
*/
#include<bits/stdc++.h>
using namespace std;
void patternPrint(int n)
{
	for(int i=n;i>=1;i--)
    {   
        for(int j = i;j>=1;j--)
            cout<<" "<<" ";
        
        for(int k=i;k<=n;k++)
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