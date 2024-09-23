/*
PATTERN - 93
245.Write a program to print the following pattern:
	I/P : n = 5
    O/P :
            15
          14 13
        12 11 10
         9 8 7 6
       5 4 3 2 1  
*/
#include<bits/stdc++.h>
using namespace std;
void patternPrint(int n)
{
    int k=(n*(n+1))/2;
	for(int i=1;i<=n;i++)
    {   
        for(int j = n;j>=1;j--)
        {
            if(i>=j)
                cout<<k--<<" ";
            else
                cout<<" "<<" ";
        }
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