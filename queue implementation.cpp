#include<iostream>
using namespace std;

class Queue{
	public:
		int*arr;
		int size;
		int front;
		int rear;
		//constructor
		Queue(int size){
			this->size=size;
			arr= new int[size];
			front=0;
			rear=0;
		}
	//behaviours
	
	void enqueue(int data){
		if(rear==size){
			cout<<"queue is full"<<endl;
		}else{
			arr[rear]=data;
			rear++;
		}
	}
	
    int dequeue(){
    	if(front==rear){
    		cout<<"empty queue"<<endl;
    		return -1;
		}else{
			int ans=arr[front];
			arr[front]=-1;
			front++;
			if(front==rear){
				front=0;
				rear=0;
			}
			return ans;
		}
	}	
	
	int qfront(){
		if(front==rear){
			cout<<"empty queue"<<endl;
			return -1;
		}else{
			return arr[front];
		}
	}
	
	bool isEmpty(){
		if(front==rear){
			return true;
		}else{
			return false;
		}
	}
};


int main(){
	
	Queue q(5);
	q.enqueue(10);
	q.enqueue(20);
	cout<<q.dequeue()<<endl;
	cout<<q.qfront()<<endl;
	cout<<q.isEmpty()<<endl;
	
	return 0;
}
