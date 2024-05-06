# include<stdio.h>
# include<time.h>
int main(void){
	float amount = 19000.00;
	time_t mytime;
	mytime = time(NULL);
	
	int choice,result,balance;
	printf("Enter 1 for withdrawal\n"
	       "Enter 2 to deposit\n"
		   "Enter 3 for my account\n"
		   "Enter 4 for lipa na mpesa\n\n");
		   scanf("%d",&choice);
		   float num2;
		    int option,num1,decision;
		    int pin;
	switch(choice){
		case 1:
		printf("\n1.From Agent\n"
		               "2.From ATM\n\n");
		 scanf("%d",&option);
		 if(option == 1){
		 	printf("\nEnter agent number: \n");
		 	scanf("%d",&num1);
		 	printf("Enter amount: \n");
		 	scanf("%f",&num2);
		 		printf("\nEnter pin: \n");
             	scanf("%d",&pin);
		 		if(pin == 7777){
		 		
		 	printf("\nConfirm withdrawal of %.2f from %d at ",num2 ,num1);
		 	printf(ctime(&mytime));
			printf("\n1.to continue\n"
			       "2.cancel\n\n");
		 	scanf("%d",&decision);
		 	if(decision == 1){
		 			amount = amount - num2;
		 		printf("\nsuccefully withsrawal of shillings %.2f from %d Agency limited. New mpesa balance is %.2f\n",num2 ,num1,amount);
			 }
			 else if(decision == 2){
			 	printf("\nconfirm cancel of withdrawal of shillings %d on ",num2);
			 	printf(ctime(&mytime));
		
	}}

		 
			 }
			 break;
		default : printf("wrong choice");
		 }
	
	return 0;
}
