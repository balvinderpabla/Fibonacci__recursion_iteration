#include<iostream.h>
//using namespace std;
void fib_recursion(int n)
{	
	static int n1=0, n2=1, n3;
	if(n>0){
		n3= n1+ n2;
		n1=n2;
		n2=n3;

	  cout<<n3<<" ";
	  fib_recursion(n-1);
	}
}
void fib_iteration(int n); 
int main(){
	int n=100;	
	cout<<"First 100 Fibonacci series using recursion: \n";
	cout<<"0 "<<"1 ";
	fib_recursion(n-2);
	fib_iteration(n);
	return 0;
}