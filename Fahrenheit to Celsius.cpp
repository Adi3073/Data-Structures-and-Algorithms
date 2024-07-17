// Fahrenheit to Celsius

#include<iostream>
using namespace std;


int main(){

       /*  Read input as specified in the question.
	* Print output as specified in the question.
	*/
	int S,E,W;
	cin>>S;
	cin>>E;
	cin>>W;
	signed int C;
	for(int i=S; i<E; i=i+W){
		C=((i-32)*5)/9;
		cout<<i<<"  "<<C<<endl;
	}  
}
