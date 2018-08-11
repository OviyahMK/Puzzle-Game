#include<iostream>
#include<conio.h>
#include<string.h>

using namespace std;

class puzzle
{
	struct node
	{
		int index;
		string clue1,clue2;
		int ans;
		node *next,*head;
    };
    
    public:
    	
    int array[10];
    int count;
    struct node *list;
    struct node *tail;
    struct node *new1;
    struct node *new2;
    struct node *new3;
    struct node *new4;
    struct node *new5;
    struct node *new6;
    struct node *new7;
    struct node *new8;
    struct node *new9;
    struct node *new0;
    
    puzzle()
    {
    	count=0;
    	for(int i=0;i<10;i++)
    	array[i]=i;
    	
    	new1=new node;
    	new1->index=1;
    	new1->clue1="** Known Planets In Solar System........??";
    	new1->clue2="** To Get Two Wheeler Driving License........??";
    	new1->ans=8;
    	//new1->next=null;
    	list=new1;
    	tail=new1;
    	
    	new2=new node;
    	new2->index=2;
    	new2->clue1="** Monozygotic........??";
    	new2->clue2="** Couple........??";
    	new2->ans=2;
    	list->next=new2;
    	tail=new2;
    	
    	new3=new node;
    	new3->index=3;
    	new3->clue1="** Rathas........??";
    	new3->clue2="** Pandavas........??";
    	new3->ans=5;
    	tail->next=new3;
    	tail=new3;
    	
    	new4=new node;
    	new4->index=4;
    	new4->clue1="** Seasons........??";
    	new4->clue2="** Directions........??";
    	new4->ans=4;
    	tail->next=new4;
    	tail=new4;
    	
    	new5=new node;
    	new5->index=5;
    	new5->clue1="** Players In Baseball Team........??";
    	new5->clue2="** Largest one digit number........??";
    	new5->ans=9;
    	tail->next=new5;
    	tail=new5;
    	
    	new6=new node;
    	new6->index=6;
    	new6->clue1="** Position That Win A Gold Medal........??";
    	new6->clue2="** Natural Number Starts With........??";
    	new6->ans=1;
    	tail->next=new6;
    	tail=new6;
    	
    	new7=new node;
    	new7->index=7;
    	new7->clue1="** Ancient South Indian Kingdom........??";
    	new7->clue2="** Sides For Triangle........??";
    	new7->ans=3;
    	tail->next=new7;
    	tail=new7;
    	
    	new8=new node;
    	new8->index=8;
    	new8->clue1="** Continents In World........??";
    	new8->clue2="** Union Teritories........??";
    	new8->ans=7;
    	tail->next=new8;
    	tail=new8;
    	
    	new9=new node;
    	new9->index=9;
    	new9->clue1="** One Over........??";
    	new9->clue2="** Faces For a Cube........??";
    	new9->ans=6;
    	tail->next=new9;
    	tail=new9;
    	
    	new0=new node;
    	new0->index=10;
    	new0->clue1="** Gravity In Space........??";
    	new0->clue2="** Whole Number Starts With........??";
    	new0->ans=0;
    	tail->next=new0;
    	tail=new4;
    }
    
    void display(int n,int h)
    {
    	if(h==0)
    		array[h]=1111;
    	array[n]=1111;
		
    	cout<<"\t\t --------------------------------------------------------------------------------"<<endl;
		cout<<"\t\t |";
		for(int i=0;i<5;i++)
		{
			
			cout<<"\t "<<array[i]<<"\t|";
			
		}
		cout<<endl;
		cout<<"\t\t --------------------------------------------------------------------------------"<<endl;
		cout<<"\t\t |";
		for(int i=5;i<10;i++)
		{
			cout<<"\t "<<array[i]<<"\t|";
		}
		cout<<endl;
		cout<<"\t\t --------------------------------------------------------------------------------"<<endl<<endl;
	}
    void clues()
    {
    	int a;
    	int count=0;
    	struct node *ptr, *preptr;
    	ptr=list;
    	preptr=list;
    	while(ptr!=NULL)
		{
			count++;
			cout<<"\t\t YOUR CLUE IS...."<<endl<<endl;
			
    		cout<<"\t\t "<<ptr->clue1<<endl<<endl;
    		
    		cout<<"\t\t THINK FOR THE ANSWER...."<<endl<<endl;
    		
    		cout<<"\t\t ";
    		cin>>a;
    		cout<<endl;
    		if(a==ptr->ans)
    		{
    			cout<<"\t\t YOUR ANSWER IS CORRECT \n \n \t\t MOVE TO BLOCK "<<ptr->ans<<endl<<endl<<endl;
    			if(ptr->ans!=8)
    			{
					display(preptr->ans,ptr->ans);
				}
    			cout<<"\t-------------------------------------------------------------------"<<endl<<endl;
    			
    			if(ptr->next!=NULL)
				cout<<"\t\t NOW YOUR IN "<<ptr->ans<<"th BLOCK "<<endl;
				preptr=ptr;
				ptr=ptr->next;
    			
    		}
    		else
    		{
    			cout<<"\t\t WRONG!!!.... TRY AGAIN"<<endl;
    			cout<<"\t\t YOUR SECOND CLUE IS...."<<endl<<endl;
    			
    			cout<<"\t\t "<<ptr->clue2<<endl<<endl;
    			
    			cout<<"\t\t THINK FOR THE ANSWER...."<<endl<<endl;
    		
    			cout<<"\t\t ";
    			cin>>a;
    			cout<<endl;
    			if(a==ptr->ans)
    			{
    				cout<<"\t\t YOUR ANSWER IS CORRECT \n \n \t\t MOVE TO BLOCK "<<ptr->ans<<endl;
    				//cout<<"MOVE TO "<<ptr->ans<<"th BLOCK "<<endl<<endl<<endl;
    				
    				if(ptr->ans!=8)
					{
						display(preptr->ans,ptr->ans);
					}
						
    				cout<<"\t-------------------------------------------------------------------"<<endl<<endl;
    				
    				if(ptr->next!=NULL)
					cout<<"\t\t NOW YOUR IN "<<ptr->ans<<"th BLOCK "<<endl;
					preptr=ptr;
					ptr=ptr->next;	
    			}
    			else
    			{
    			cout<<"\t\t WRONG!!!.... TRY AGAIN"<<endl;
    			break;
    		    }
    		}
    	}
    	if(count==10)
    	cout<<"\t\t YOU WON...... CONGRATS....."<<endl<<endl;
    	else
    	cout<<"\t\t YOU LOST YOUR CHANCE!!!"<<endl<<endl<<"\t\t *****************************************************************"<<endl<<endl;
    	
	}
    
};

int main()
{
	int x;
	puzzle p;
	cout<<endl;
	cout<<"\t\t LET PLAY THE PAANDI GAME"<<endl<<endl<<endl;
	
	cout<<"\t\t ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~   INSTRUCTION  ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl<<endl<<endl;
	
	cout<<"\t\t --------------------------------------------------------------------------------"<<endl;
	cout<<"\t\t |";
	for(int i=0;i<5;i++)
	{
		cout<<"\t "<<i<<"\t|";
	}
	cout<<endl;
	cout<<"\t\t --------------------------------------------------------------------------------"<<endl;
	cout<<"\t\t |";
	for(int i=5;i<10;i++)
	{
		cout<<"\t "<<i<<"\t|";
	}
	cout<<endl;
	cout<<"\t\t --------------------------------------------------------------------------------"<<endl<<endl;
	cout<<"\t\t THERE ARE 10 BLOCKS"<<endl;
	cout<<"\t\t YOU WILL BE GIVEN A CLUE"<<endl;
	cout<<"\t\t YOU HAVE TO ANSWER THE CLUES"<<endl;
	cout<<"\t\t ANSWERS WILL BE 0 TO 9"<<endl;
	cout<<"\t\t CHANCE WILL BE GIVEN ONLY TWICE"<<endl;
	cout<<"\t\t IF YOU ANSWERED CORRECT, YOU WILL MOVE TO THE BLOCK OF THAT NUMBER YOU ANSWERED"<<endl;
	cout<<"\t\t IF YOU ANSWERED WRONG, YOU CAN GET SECOND CLUE"<<endl;
	cout<<"\t\t IF YOU ANSWERED WRONG FOR SECOND CLUE, GAME WILL GET ENDED"<<endl;
	cout<<"\t\t IF YOU WANT YOU CAN PLAY AGAIN"<<endl;
	
	cout<<"\t\t ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl<<endl;
	
	cout<<"\t\t TO START ENTER 1"<<endl;
	cout<<"\t\t ";
	cin>>x;
	cout<<endl<<endl;
	
	if(x==1)
		p.clues();
		
	cout<<"\t\t ARE U WANT TO PLAY AGAIN "<<endl<<endl<<endl;
	cout<<"\t\t TO START ENTER 1"<<endl;
	cout<<"\t\t ";
	cin>>x;
	cout<<endl<<endl;
	
	if(x==1)
		p.clues();
	getch();
	return 0;
}
    	

