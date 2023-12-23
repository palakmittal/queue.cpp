#include<iostream>
using namespace std;
#include<queue>


int main(){
	
	queue<int>q;
	
	q.push(10);
	q.push(20);
	q.push(30);
	q.push(40);
	cout<<q.size()<<endl;//4
	
	q.pop();	
	cout<<q.size()<<endl;//3
	
	cout<<q.empty()<<endl;//0
	cout<<q.front()<<endl;	//20
	
	
	return 0;
}
