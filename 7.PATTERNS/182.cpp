/*
PATTERN - 30
182.Write a program to print the following pattern:
	I/P : n = 5
    O/P : 
    A B C D E
    F G H I J
    K L M N O
    P Q R S T 
    U V W X Y 
*/
#include<bits/stdc++.h>
using namespace std;
void patternPrint(int n)
{
    char k = 'A';
	for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            cout<<char(k)<<" ";
            k++;
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
