#include <stdio.h>



 struct time {
	int hour;
	int minutes;
	int seconds;
	};
 struct date {
	int day;
	int month;
	int year;
	};
	
 struct train {
	char train_name[100];
	int train_no;
	char arrival_station[100],departure_station[100];
	struct time at,dt;
	struct date ad,dd;
	};
	
void particular_station(struct train *p, int n){
	char dname[100];
	printf("enter name of departure station to search:");
	gets(dname);
	printf("\ndetials of train are :-\n");
	for (int i=0;i<n;i++){
		if (!strcmp((p+i)->departure_station,dname)){
			printf("trian name:%s \n",(p+i)->train_name);
			printf("trian no:- %d \n",(p+i)->train_no);
			printf("arrival station:- %s \n",(p+i)->arrival_station);
			printf("date of arrival:- %d %d %d \n",(p+i)->ad.day,(p+i)->ad.month,(p+i)->ad.year);
		}
	}
}

void particular_station(struct train *p, int n){
	char dname[100]aname[100];
	printf("enter name of departure station :");
	gets(dname);
	printf("enter name of arrival  station :");
	gets(aname);
	printf("\ndetials of train are :-\n");
	for (int i=0;i<n;i++){
		if ((!strcmp((p+i)->departure_station,dname))&&!(!strcmp((p+i)->departure_station,aname))){
			printf("trian name:%s \n",(p+i)->train_name);
			printf("trian no:- %d \n",(p+i)->train_no);
			printf("arrival station:- %s \n",(p+i)->arrival_station);
			printf("date of arrival:- %d %d %d \n",(p+i)->ad.day,(p+i)->ad.month,(p+i)->ad.year);
		}
	}
}
	
int main(){
	int n ;
	puts("enter no of students :");
	scanf("%d",&n);
	getchar();
	struct train *p= (struct train *) malloc(n*sizeof(struct train ));
	for (int i=0;i<n;i++){
	
	
		puts("enter name of train:");
		gets((p+i)->train_name);
		
		printf("enter train_no. :\n");
		scanf("%d",&(p+i)->train_no);
		getchar();
		printf("enter arrival station name  :");
		scanf("%s",(p+i)->arrival_station);
		getchar();
		printf("enter departure  station name  :");
		gets((p+i)->departure_station );
		printf("enter arrival time :");
		scanf("%d%d%d",&(p+i)->at.hour,&(p+i)->at.minutes,&(p+i)->at.seconds);
		getchar();
		printf("enter departure time :");
		scanf("%d%d%d",&(p+i)->dt.hour,&(p+i)->dt.minutes,&(p+i)->dt.seconds);
		getchar();
		printf("enter arrival date :");
		scanf("%d%d%d",&(p+i)->ad.day,&(p+i)->ad.month,&(p+i)->ad.year);
		getchar();
		printf("enter departure date :");
		scanf("%d%d%d",&(p+i)->dd.day,&(p+i)->dd.month,&(p+i)->dd.year);
		getchar();
	}
	
	particular_station(p,n);
	
	return 0;
}
