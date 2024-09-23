/*
PATTERN - 97
249.Write a program to print the following pattern:
	I/P : n = 5
    O/P :
            E
          D E
        C D E
      B C D E
    A B C D E 
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
            cout<<(char)(k+64)<<" ";
            
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