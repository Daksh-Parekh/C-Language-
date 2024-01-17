#include<iostream>
using namespace std;

main(){
	int n;
	
	cout << "Enter n: ";
	cin >> n;
	
	int a[n];
	int i;
	
	for(i=0;i<n;i++){
		cout << "a["<< i <<"]: ";
		cin >> a[i];
	}
	
	cout << endl;
	for(i=0;i<n;i++){
		cout << "a["<< i <<"]: "<<a[i]<< endl;
	}
	
	cout << endl << "Even elements of an Array: ";
	
	for(i=0;i<n;i++){
		if(a[i]%2 ==0){
			cout << a[i] <<" ";
		}
	}
	
//	cout << "Even elements of an array: "<<a[i]<<" ";
}
