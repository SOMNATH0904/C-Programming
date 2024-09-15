// Ques : Enter address (house no, block, city, state) of 5 people.

#include<stdio.h>
#include<string.h>

typedef struct address {
	int houseNo;
	int block;
	char city[100];
	char state[100];
} add;

void printAdd(struct address add);

int main() {
	add adds[5];
	// Input
	printf("----- Enter Info for Person 1 -----");
	scanf("%d", &adds[0].houseNo);
	scanf("%d", &adds[0].block);
	scanf("%s", &adds[0].city);
	scanf("%s", &adds[0].state);

	printf("----- Enter Info for Person 2 -----");
	scanf("%d", &adds[1].houseNo);
	scanf("%d", &adds[1].block);
	scanf("%s", &adds[1].city);
	scanf("%s", &adds[1].state);

	printf("----- Enter Info for Person 3 -----");
	scanf("%d", &adds[2].houseNo);
	scanf("%d", &adds[2].block);
	scanf("%s", &adds[2].city);
	scanf("%s", &adds[2].state);

	printf("----- Enter Info for Person 4 -----");
	scanf("%d", &adds[3].houseNo);
	scanf("%d", &adds[3].block);
	scanf("%s", &adds[3].city);
	scanf("%s", &adds[3].state);

	printf("----- Enter Info for Person 5 -----");
	scanf("%d", &adds[4].houseNo);
	scanf("%d", &adds[4].block);
	scanf("%s", &adds[4].city);
	scanf("%s", &adds[4].state);

	printAdd(adds[0]);
	printAdd(adds[1]);
	printAdd(adds[2]);
	printAdd(adds[3]);
	printAdd(adds[4]);	
	
	return 0;
}

void printAdd(struct address add) {
	printf("Address is : %d, %d, %s, %s\n", add.houseNo, add.block, add.city, add.state);

}
