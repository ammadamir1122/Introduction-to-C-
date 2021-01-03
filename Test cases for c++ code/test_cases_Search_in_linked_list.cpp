#include <iostream>
#include <cstdlib>
#include <gtest/gtest.h>
using namespace std;

// my code is starting from line number 7, so flow graph will also starts from line no.7

struct node 
{
    int num;                
    node *nextptr;             
}*stnode; //node defined

void makeList(int n);                 
void showList();
void searchList(int item, int n);
 
  	
  	void makeList(int n) //function to create linked list.
{
    struct node *frntNode, *tmp;
    int num, i;
 
    stnode = (struct node *)malloc(sizeof(struct node));
    
    EXPECT_TRUE(stnode == NULL);
    if(stnode == NULL)        
    {
        cout<<" Memory can not be allocated";
    }
    else
    {
                                  
        cout<<"Enter the data for node 1: ";
        cin>>num;
        stnode-> num = num;      
        stnode-> nextptr = NULL; //Links the address field to NULL
        tmp = stnode;
 
        for(i=2; i<=n; i++)
        {
            frntNode = (struct node *)malloc(sizeof(struct node)); 
 
			EXPECT_EQ(frntnode == NULL);
            if(frntNode == NULL) //If frntnode is null no memory cannot be allotted
            {
                cout<<"Memory can not be allocated";
                break;
            }
            else
            {
                cout<<"Enter the data for node "<<i<<": "; // Entering data in nodes.
                cin>>num;
                frntNode->num = num;         
                frntNode->nextptr = NULL;    
                tmp->nextptr = frntNode;     
                tmp = tmp->nextptr;
            }
        }
    }
} 


void showList() //function to print linked list
{
    struct node *tmp;
    EXPECT_NE(stnode == NULL);
    if(stnode == NULL)
    {
        cout<<"No data found in the list";
    }
    else
    {
        tmp = stnode;
        cout<<"Linked List: ";
        while(tmp != NULL)
        {
            tmp = tmp->nextptr;         
        }
    }
} 
void searchList(int item , int n) //function to search element in the linked list 
{  
    struct node *tmp;  
    int i=0,flag;  
    tmp = stnode;  
	EXPECT_GT(stnode == NULL) 
    if(stnode == NULL)  
    {  
        cout<<"\nEmpty List\n";  
    }  
    else  
    {   
        while (tmp!=NULL)  
        {  
			EXPECT_TRUE(tmp->num == item)        
            if(tmp->num == item)  //If element is present in the list
            {  
                cout<<"Item found at location: "<<(i+1); flag=0; } 
			else { flag++; } i++; tmp = tmp -> nextptr;  
        }  
        
        EXPECT_FALSE(flag == n)        
        if(flag==n) //If element is not present in the list
        {  
            cout<<"Item not found\n";  
        }  
    }  
}
  	
 
 
 
 
 
 TEST(MainTest, IntenceTwo){
 }
 
int main()
{
	
	testing::InitGoogleTest(&argc, argv);
	return Run_ALL_Tests();
    int n,num,item;
		
    cout<<"Enter the number of nodes: ";
    cin>>n;
    makeList(n);
    cout<<"\nLinked list data: \n";		
    showList();
    cout<<"\nEnter element you want to search: ";   
    cin>>item;
    searchList(item,n);

    return 0;
}

