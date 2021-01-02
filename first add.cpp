#include<iostream>

using namespace std;

int sum(int x, int y){
	return x+y;
}
int sub(int x, int y){
	return x-y;
}

int main(){
	cout<<"First add";
	cout<<sum(1,3)<<endl;
	cout<<sub(4,1)<<endl;
	return 0;
}
