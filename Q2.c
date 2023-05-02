#include <stdio.h>

struct date {
	int day;
	int month;
	int year;	
};
int main(){
	struct date d1,d2;
	printf("eneter first date:");
	scanf("%d%d%d",&d1.day,&d1.month,&d1.year);
	printf("\neneter second date:");
	scanf("%d%d%d",&d2.day,&d2.month,&d2.year);
	if ((d1.day==d2.day) && (d1.month==d2.month) && (d1.year==d2.year)){
		printf("dates are equal");}
	else
		printf("dates are not equal");
return 0;
}
