#include <stdio.h>
#include <string.h>

void Test(){
    printf("New patched one\n");
}
void First() {
    char myList[4][15] = {"Add", "Substraction", "Times", "Divide"};
    int i;
    int x, y, sum;

    for (i = 0; i < 4; i++){
        printf("%d. %s (length: %lu)\n", i, myList[i], strlen(myList[i]));
    }

    Test();

    int option;

    printf("What you want to do :\n");
    scanf("%d", &option);
    
    printf("Give me the first number : \n");
    scanf("%d", &x);

    printf("Give me the second number : \n");
    scanf("%d", &y);
   


    switch (option) {
	case 1:

		sum = x + y;
		printf("The total is : %d \n",sum);

		break;
	case 2:
        sum = x - y;
        printf("The total is : %d \n", sum);

		break;
	case 3:
		sum = x * y;
        printf("The total is : %d \n",sum);

		break;
	case 4:
		sum = x / y;
        printf("The total is : %d \n", sum);
		break;

    }



}















