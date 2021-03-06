#include <iostream>
#include<conio.h>
using namespace std;

class Stack{
	private:
	int top;
	int arr[5];
	public:
		Stack(){
			top=-1;
			
			for(int i=0;i<5;i++)
			{
				arr[i]=0;
			}
		}
		bool isEmpty(){
			if(top==-1){
				return true; 
			}
			else{
				return false;
			}
				
		}
		bool isFull(){
			if(top==4){
				return true;
			}
			else{
				return false;
			}
		}
		void push(int value){
			if(isFull()){
				cout<<"Stack Overflow."<<endl;
			}
			else{
				top++;//top=0
				arr[top]=value;
			}
		}
		int pop(){
			if(isEmpty()){
				cout<<"Stack Underflow."<<endl;
				return 0;
			}
			else{
				int popvalue=top;
				arr[top]=0;
				top--;
				return popvalue;
			}
		}
		
		int count(){
			return(top+1);
		}
		
		int peek(int pos){
			if(isEmpty()){
				cout<<"Stack Underflow."<<endl;
			}
			else{
				return arr[pos];
			}
		}
		
		void change(int pos,int value){
			arr[pos]=value;
			cout<<"Value is change at location "<<pos<<endl;
		}
		
		void Display(){
			cout<<"All value of Stack are:"<<endl;
			for(int i=4;i>=0;i--){
				cout<<arr[i]<<endl;
			}
		}
		
	
	
};

int main() {
	
	Stack s1;
	int option,value,position;
	
	do{
		cout<<"What operation do you perform? Selct the no. Enter 0 for exit."<<endl;
	    cout<<"1.Push()"<<endl;
	     cout<<"2.PoP()"<<endl;
	      cout<<"3.isEmpty()"<<endl;
	       cout<<"4.isFull()"<<endl;
	        cout<<"5.peek()"<<endl;
	         cout<<"6.count()"<<endl;
	          cout<<"7.change()"<<endl;
	           cout<<"8.Display()"<<endl;
	            cout<<"9.Clear Screen()"<<endl;
	            
	            cin>>option;
	            switch(option){
	            	
	        
	            	case 0:
					break;
						
	            	case 1:
	            		cout<<"Enter the value:";
	            		cin>>value;
	            		s1.push(value);
	            		break;
	            	
	            	case 2:
	            		cout<<"Pop function called - Pop value:"<<s1.pop()<<endl;
	            		break;
	            	
	            	case 3:
	            		if(s1.isEmpty()){
	            			cout<<"Stack is Empty."<<endl;
						}
						else
						cout<<"Stack is not Empty."<<endl;
						break;
					
					case 4:
							if(s1.isFull()){
	            			cout<<"Stack is Full."<<endl;
						}
						else
						cout<<"Stack is not Full."<<endl;
						break;
					
					case 5:
						cout<<"Enter the position to peek the value:";
						cin>>position;
						cout<<"Peek function called-value at position :"<<s1.peek(position);
						break;
					
					case 6:
						cout<<"count function called .Number of items in the stack is:"<<s1.count()<<endl;
						break;
					
					case 7:
						cout<<"Change function called-"<<endl;
						cout<<"Enter the position to change the value:";
						cin>>position;
						cout<<"Enter the value:";
						cin>>value;
						cout<<endl;
						s1.change(position,value);
						break;
					
					case 8:
						cout<<"Display functon called-"<<endl;
						s1.Display();
						break;
					
					case 9:
						system("cls");
						break;
					
					
						default:
							cout<<"Enter proper number.";
							
						
						
						
						
						
						
	            	
			}
	            
		
		
	}
	while(option!=0);
	
	
	return 0;
}
