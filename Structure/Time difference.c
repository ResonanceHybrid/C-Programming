#include <conio.h>
#include <stdio.h>


struct time{
	int sec;
	int min;
	int hrs;
	
};
int main(){
	struct time start,stop,sum,diff;
	printf("ENter start time: hr:min:sec \n");
	scanf("%d%d%d",&start.hrs,&start.min,&start.sec);
	printf("ENter stop time: hr:min:sec \n");
	scanf("%d%d%d",&stop.hrs,&stop.min,&stop.sec);
	add(&start,&stop,&sum);
	printf("The time addition is \n%d:%d:%d",sum.hrs,sum.min,sum.sec);
	difference(&start,&stop,&diff);
	printf("\nThe time difference is \n%d:%d:%d",diff.hrs,diff.min,diff.sec);
	getch();
	return 0;
}

int add(struct time *start,struct time *stop,struct time *sum){
	sum->hrs=start->hrs+stop->hrs;
	sum->min=start->min+stop->min;
	sum->sec=start->sec+stop->sec;
	
	if(sum->sec>=60){
		sum->sec-=60;
		sum->min+=1;
	}
	if(sum->min>=60){
		sum->min-=60;
		sum->hrs+=1;
	}
}
int difference(struct time *start,struct time *stop,struct time *diff){
	if(start->sec>stop->sec){
		stop->sec+=60;
		stop->min-=1;
	}diff->sec=stop->sec-start->sec;
	if(start->min>stop->min){
		stop->min+=60;
		stop->hrs-=1;
	}diff->min=stop->min-start->min;
	if(start->hrs>stop->hrs){
		stop->hrs+=24;
	}diff->hrs=stop->hrs-start->hrs;
		
}
