#include<iostream>
#include<conio.h>
using namespace std;

class Queue{
	private:
		int front,rear;
		int arr[5];
		
	public:
		
		Queue(){
			front=-1;
			rear=-1;
			for(int i=0;i<5;i++){
				arr[i]=0;
			}
			
		}
		int isFull(){
			if(rear==4-1){
				return true;
			}
			else 
			return false;
		}
		
		int isEmpty(){
			if(front==-1&&rear==-1)
			{
				return true;
			}
			else
			return false;
		
		}
		
		void enqueue(int value){
			if(isFull()){
				cout<<"Queue is full"<<endl;
				return;
			}
			else if(isEmpty()){
				front=rear=0;
				
			}
			else{
				rear++;
			}
			arr[rear]=value;
			
			
		}
		
	int dequeue(){
			int x=0;
			if(isEmpty()){
			cout<<"Queue is Empty.";
			return 0 ;	
			}
			else if(front==rear){
				x=arr[front];
				arr[front]=0;
				front=rear=-1;
			}
			else{
				x=arr[front];
				front++;
				
			}
			return x;
			
		}
			int count()
			{
				return(rear-front+1);
				
			}
			
		void Display(){
			for(int i=0;i<5;i++){
				cout<<" "<<arr[i];
			}
		}	
		
};

int main(){
	
	Queue ob1;
	int option,value;

do{
	cout<<"what operaion do you perform ? Selct the option. Enter 0 for exit."<<endl;
	cout<<"1.Enqueue()"<<endl;
	cout<<"2.Dequeue()"<<endl;
	cout<<"3.isFull()"<<endl;
	cout<<"4.isEmpty()"<<endl;
	cout<<"5.count()"<<endl;
	cout<<"6.Display()"<<endl;
	cout<<"7.Clear Screen."<<endl;
		
	cin>>option;
		switch(option){
		case 0:
			break;
			
		case 1:
			if(ob1.isFull()){
				cout<<"Queue is Full."<<endl;
				return 0;
			}
			else{
				cout<<"Enter the Value: ";
				cin>>value;
				ob1.enqueue(value);
				
			}
			
			break;
		case 2:
			if(ob1.isEmpty()){
				cout<<"Queue is Empty."<<endl;
				return 0;
			}
			else{
				cout<<"Dequeue value "<<ob1.dequeue();
			}
			break;
		case 3:
			if(ob1.isFull()){
				cout<<"Queue is full."<<endl;
							}
			else
			cout<<"Queue is not full."<<endl;
			break;
		case 4:
			if(ob1.isEmpty()){
				cout<<"Queue is Empty."<<endl;
			}
			else
			cout<<"Queue is not Empty."<<endl;
			break;
		case 5:
			cout<<"No of items in queue : "<<ob1.count();
			break;
		case 6:
			cout<<"Dispaly the items of Queue:";
			ob1.Display();
			break;
		case 7:
			system("cls");
			break;
			
			
			default:
			cout<<"Please select correct option.";				
	}
	
}
while(option!=0);
	
	return 0;
}
