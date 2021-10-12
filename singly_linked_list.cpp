#include<iostream>
using namespace std;
class Node
{  public:
	
	int key;
	int data;
	Node* next;
	
		Node()
		{
			key=0;
			data=0;
			next=NULL;
			
		}
		Node(int k, int d)
		{
			key=k;
			data=d;
		}
};
class singlinklist
{
	public:
	   Node* head;
	    
	    singlinklist()
	    {
	    	head=NULL;
	    	
		}
		singlinklist(Node* n)
		{
			head=n; 
			
		}
		// 1.check for exists or not
		Node* nodeexists(int k)
		{
			 Node* temp=NULL;
			 Node* ptr=head;
			 while(ptr!=NULL)
			 {
			 	if(ptr->key==k)
			 	{
			 		temp=ptr;
				}
				 ptr=ptr->next;
			 }
			 return temp;
			 
		}
		//2. append a node to the list;
		void appendNode(Node *n)
		{
			if(nodeexists(n->key)!= NULL)
			
			{
			  cout<<"Node already exit with key vlaue "<<n->key<<" append another node withe dofferent key value"<<endl;
			  
			}
			else 
			{
				if(head==NULL)
				{
					Node* ptr = head;
					while(ptr->next!=NULL)
					{
						ptr =ptr->next;
					}
					ptr->next=n;
					cout<<"Node append"<<endl;
					
					
			   	}
			}
		}
		//3. pren=pend Node from start
		void prependNode(Node* n)
		{
			if(nodeexists(n->key)!=NULL)
			{
			  cout<<"Node already exit with key vlaue "<<n->key<<" append another node withe dofferent key value"<<endl;
			  
			}
			else
			{
				n->next=head;
				head=n;
				cout<<"node prepended"<<endl;
			}
		}	
		//4. Insert a node after a paticular node in the list
		void insertNodeAter (int k, Node* n)
		{
			Node* ptr=nodeexists(k);
			if(ptr==NULL)
				{
					
				
			cout<<"No node exists with key vale"<<k<<endl;
			    }
			else
			{
				if(nodeexists(n->key)!=NULL)
				{
					cout<<"node alread exit with key value "<<n->key<<"apppend another node wiht diffferent key value "<<endl;
					
				}
				else 
				{
					n->next=ptr->next;
					ptr->next=n;
				}
			}
		}
		//5. Delte node by unique key
		void deleteNodebykey(int k)
		{
			if(head==NULL)
			{
				cout<<"singly linked list alrready empty cant delete"<<endl;
				
			}
			else if(head!=NULL)
			{
				head = head->next;
				cout<<"Node UNLINKED with key claue:"<<k<<endl;
				
			}
			else
			{
				 Node* temp=NULL;
				 Node* prevptr= head;
				 Node* currentptr = head->next;
				 while(currentptr!=NULL)
				 {
				 	if(currentptr->key==k)
				 	{
				 		temp= currentptr;
				 		currentptr= currentptr->next;
					 }
					 
				 }
				if(temp!=NULL)
				{
					prevptr->next=temp->next;
					cout<<"Node UNLINKED with key value"<<k<<endl;
				}
				else
				{
					cout<<"Node doesnt exist with key value"<<k<<endl;
					
				}
			}
		
    
       }
       //6. update node
       void updateNodebykey(int k, int d)
       {
       	Node* ptr = nodeexists(k);
       	if(ptr!=NULL)
       		{
     			ptr->data=d;
			 	cout<<"Node date update successfully"<<endl;  		
	    	}
	    else 
	    	{
	    		cout<<"Node doesnt exist with key value"<<k<<endl;
			}
       	 
	    }
	    //7.print
	    void printlist()
	    {
	    	if(head==NULL)
	    	{
	    		cout<<"no Nodes in singly linked list";
	    		
			}
			else
			{
				cout<<endl<<"singly linked list values:";
				Node* temp=head;
				while(temp!=NULL)
				{
					cout<<"("<<temp->key<<","<<temp->data<<")--";
					temp=temp->next;
				}
			}
		}
};
int main()
{
	singlinklist s;
	int opt;
	int key1,k1,data1;
	do
	{
		cout<<"\nwhat opt do you wnat to perform select opt no enter 0 to exit"<<endl;
		cout<<"1.appended Node()"<<endl;
		cout<<"2.prependedNode()"<<endl;
		cout<<"3/ insert Node()"<<endl;
		cout<<"4. delete Node()"<<endl;
		cout<<"5. update Node()"<<endl;
		cout<<"6. print()"<<endl;
		cout<<"7. clear screen"<<endl;
     
     	cin>>opt;
     	Node* n1=new Node();
     	//Node n1;
     	switch(opt)
     	{
     		case 0:
     			break;
     		case 1:
     			cout<<"append Node opereartion \n Enter key and data of node to be appended"<<endl;
     			cin>>key1;
     			cin>>data1;
     			n1->key=key1;
     			n1->data=data1;
     			s.appendNode(n1);
     			// cout<<n1.key<<"  "<<n1.data<<endl;
     			break;
     		case 2:
     			cout<<"prepend Node operation \n Enter key and data of the node to be oprepended"<<endl;
     			cin>>key1;
     			cin>>data1;
     			n1->key=key1;
     			n1->data=data1;
     			s.prependNode(n1);
     			break;
     		case 3:
     			cout<<"insert Node after operation \n enter key of existing Node after which you want to insert this new Node"<<endl;
     			cin>>k1;
     			cout<<"enter key and datta of the new node first"<<endl;
     			cin>>key1;
     			cin>>data1;
     			n1->key=key1;
     			n1->data=data1;
     			s.insertNodeAter(k1,n1);
     			break;
     		case 4 :
     			cout<<"delete Node by key operation \n Enter key of the node to be deleted"<<endl;
     			cin>>k1;
     			s.deleteNodebykey(k1);
     			break;
     		case 5:
     			cout<<"update Node y key operation \n enter key and new date to be updated"<<endl;
     			cin>>key1;
     			cin>>data1;
     			s.updateNodebykey(key1,data1);
     			break;
     		case 6:
     			s.printlist();
     			break;
     		case 7:
     			system("cls");
     			break;
     		default:
     			cout<<"enter proper option no"<<endl;
     			
     			
     		   
		 }
    }while(opt!=0);
return 0;
}
