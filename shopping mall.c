
#include<stdio.h>
#include<String.h>
int main()
{
	int a,pid,prid,modify;
	int prodis;
	char product[12];
	int price,discount,quantity;
	char uid[50]="sanjana",pwd[50]="12345";
	char lid[50]="sanjana",lpwd[50]="12345";
	printf("\t\t\t******************************\n\n");
	printf("\t\t\t    RELIANCE FRESH MALL \n\n");
	printf("\t\t\t******************************\n\n");
	login:
	printf("\n \tEnter Login ID\n");
	printf("   \t");
	scanf("%s",lid);
	if(strcmp(lid,"exit")==0)
	{
		printf("\n press any key to exit");
	}
	printf("\tEnter Password \n");
	printf("\t");
	scanf("%s",lpwd);
	if(strcmp(lid,uid)==0 && strcmp(pwd,lpwd)==0)
	{
		printf("\n\tLogin Successfull\n");
	}
	else if(strcmp (lpwd,"exit")==0)
	{
		printf("\n press any key to exit");
	}
	else{
		printf("\n\tUser ID and Password Does Not Match.Please Enter Again\n");
		goto login;
	}
	b:
	printf("\t\t\t******************************\n\n");
	printf("\t\t\t    RELIANCE FRESH MALL \n\n");
	printf("\t\t\t******************************\n\n");
    printf("\n\tPress 1 For Add Product \n");
	printf("\tPress 2 For Display All Products \n ");
	printf("\tPress 3 For Modify Product \n");
	printf("\tPress 4 For Delete Product \n");
	printf("\tPress 5 View Product\n");
	printf("\tPress 6 For Exit\n");
	printf("\t");
	scanf("%d",&a);
	switch(a)
	{
		case 1:
			{
				printf("\n\tProduct Id \t:\t" );
				scanf("%d",&pid);
				printf("\n\tProduct Name\t:\t");
				scanf("%s",&product);
				printf("\n\tProduct Price\t:\t");
				scanf("%d",&price);
				printf("\n\tProduct Discount:\t");
				scanf("%d",&discount);
				prodis= price-(price*discount)/100;
				printf("\n\tProduct Quantity:\t");
				scanf("%d",&quantity);
				printf("\n\tProduct Added Successfully\n");
		 
				goto b;
				break;
			}
		case 2:
			{
				printf("\tProduct Id :%d\n",pid);
				printf("\tProduct Name : %s\n",product);
				printf("\tProduct Price :%d\n",price);
				printf("\tProduct Discount :%d\n",prodis);
				printf("\tProduct Quantity : %d\n",quantity);
				goto b;
                break;
			}
		case 3:
			{
				printf("\tEnter Product Id for Modify Product \n");
				printf("\t");
				scanf("%d",&modify);
				if(modify==pid)
				{
				
					printf("\tProduct Id is matched\n");
					printf("\tProduct Id :  \t \t\t%d\n",pid);
					printf("\tProduct Name :\t \t\t%s\n",product);
					printf("\tPlease Enter New Price :");
					printf("\t");
					scanf("%d",&price);
					printf("\tPlease Enter New Discount :  ");
					printf("\t");
					scanf("%d",&discount);
					printf("\tPlease Enter New Quantity :  ");
					printf("\t");
					scanf("%d",&quantity); 
					printf("\tProduct Details Updated Successfuly\n");
				}
				else
				{
					printf("\tProduct Id is not match\n");
				}
				
			goto b;
			}
			break;
			case 4:
				{
					printf("\tEnter Product Id \t\t");
					scanf("%d",&prid);
					pid--;
					printf("\tProduct Delete Successfully\n");
				}
			goto b;	
			break;
			case 5:
				{
				   printf("\tProduct Id :%d        ",pid);
				   printf("\tProduct Name : %s       ",product);
				   printf("\tProduct Price :%d       ",price);
				   printf("\tProduct Discount :%d\n",prodis);
				   printf("\tProduct Quantity : %d\n",quantity);
				   goto b;
            break;	
				}
			default:
				{
					printf("\tExit");
				}
	}
	
}
