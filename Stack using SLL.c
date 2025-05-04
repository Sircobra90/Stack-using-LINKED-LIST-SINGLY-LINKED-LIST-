  //W.A.P to implement Stack using LL(SLL).
  
 #include<stdio.h>
 //#include<conio.h>
 #include<stdlib.h> //malloc() & free() are declared
 
 struct Stack //Use Singly Linked List
 {
 	int data;
 	struct Stack *next;
 };
 
 
 void push(struct Stack **ptos,int x);  
 int pop(struct Stack **ptos);  
 void display(struct Stack *ptos);
 int peek(struct Stack *ptos);
  
 int main()
 {
 	struct Stack *tos=NULL; //tos is a struct pointer like start in SLL
 	//tos is start only but due to stack we use term tos :-)
 	
 	int x;  //user accepted value is stored or popped value stored
	int option;
	char choice;	
	
	do
	{
		printf("Enter the option from following 1.Push 2.Pop 3.Display All 4.Display Peek Value \n");
		printf("Enter your option ");
		scanf("%d",&option);
		
		switch(option)
		{
					
			case 1 :
				     	printf("Enter a number to be pushed ");
		                scanf("%d",&x); //Assume as of now user wont enter 0 as a value 
		                push(&tos,x);
				        break;
			case 2 :
				        x=pop(&tos);
	                    if(x!=0) //Major Correction** Assuming as of now user will not enter 0
	                      printf("Popped Element is %d\n",x);
				        break;
			case 3 :
			          display(tos);
					  break;
			case 4 :
			         x=peek(tos);
	                    if(x!=0) //Major Correction** Assuming as of now user will not enter 0
	                       printf("Peek Element is %d\n",x);
				        break;			
				     
			default :
				     printf("Invalid Choice");
		}//end of switch
		
		fflush(stdin);  //To flush the stdin (input) buffer
		printf("Do you want to continue (y/n) ");
		scanf("%c",&choice);
	}while(choice=='y'||choice=='Y');
	
	printf("Thank You");
 } //end of main()
 	
 
 //push()
 void push(struct Stack **ptos,int x) //ptos means pointer to tos
 {
 	struct Stack *p;
 	
 	p=(struct Stack *)malloc(sizeof(struct Stack)); 	
 	
 	/*Such case Rarely Occurs : When heap is full ie no space in RAM 
	 hence no new node is created and in such case 
 	 malloc() returns NULL though such case rarely comes */
 	if(p==NULL) 
 	{
 		printf("Stack Overflow\n");
 		return;
	}
	p->data=x; //push the data into the node
	p->next=*ptos; //*ptos means tos only (value at ptos)	
	*ptos=p; //*ptos means tos & it points to the newly created node always
 }//end of push()
 
 
 int pop(struct Stack **ptos)
 {
 	struct Stack *temp;
 	int x;
 	
 	//In Array we used to check tos is -1 here tos==NULL
 	if(*ptos==NULL)  //*ptos means tos only (Check for no node exist in the list)
 	{
 		printf("Stack Underflow\n");
 		return 0;  //return -1;
	}
	temp=*ptos; //temp pointing to the top most node(last node) for which data is to be popped
	x=temp->data; //pop the data from the node
	
	*ptos=temp->next; 
	//tos will point to a node pointed by the next part of node pointed by temp
	//It means tos will come one node below the top most node(last node)
	free(temp); //deleting the node pointed by temp for which data is already popped	
	return x; //V.V.IMP - returning the value is must in pop :-)
 } //end of pop()
 
 //display()
 void display(struct Stack *p) 
 {
 	if(p==NULL)
 	{
 		printf("Stack Underflow\n");
 		return;
	}
	printf("The Stack Elements are \n");
	while(p!=NULL)
	{
	  printf("%d\n",p->data);
	  p=p->next; //p will now point to the next node in the list
	}	
 } //end of display()
 
 //peek()
 int peek(struct Stack *p)
 {
   	int x;
 	
 	if(p==NULL)
 	{
 		printf("Stack Underflow\n");
 		return 0;
	}	
	x=p->data;
	return x;	
 } //end of peek()
 
 
 
 
 
 
 
 
 
 
 
 
 
