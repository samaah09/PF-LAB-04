#include <stdio.h>
int main(){
	char usernameID[5];
	int password;
	
	printf("Enter User ID: ");
	scanf("%s", &usernameID);
	
	printf("Enter password: ");
	scanf("%d", &password);
	
	if (usernameID[0]=='u'&&usernameID[1]=='s'&&usernameID[2]=='e'&&usernameID[3]=='r' && password == 7890){
		printf("connected successfully\n");
	} else {
		printf("connection failed\n");	
	}
	return 0;
}
