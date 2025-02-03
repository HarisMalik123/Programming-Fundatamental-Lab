#include<stdio.h>

struct date{
	int date;
	int month;
	int year;
};

	int main(){
		int k=0;
		int i;
		int p=0,count=0;
		struct date d1;
		printf("Enter Current Date!\n");
		scanf("%d",&d1.date);
		printf("Enter Month\n");
		scanf("%d",&d1.month);
		printf("Enter Year!\n");
		scanf("%d",&d1.year);
	
	if(d1.month%2==0){
	
		k=30-d1.date;
		p=45-k;
		d1.date=d1.date+k;
		if(p<=30&&d1.date==30)
		{
			d1.date=0;
			d1.date=d1.date+p;
			i=1;
			d1.month=d1.month+i;
		} 
		else if(p>30&&d1.date==30)
		{
			d1.date=0;
			p=p-30;
			d1.date=d1.date+p;
			i=2;
			d1.month=d1.month+i;
	}
	if(d1.month==14)
	{
		d1.month=2;
		d1.year++;
	}
	}
	if(d1.month%2!=0){
	
		k=31-d1.date;
		p=45-k;
		d1.date=d1.date+k;
		if(p<=31&&d1.date==31)
		{
			d1.date=0;
			d1.date=d1.date+p;
			i=1;
			d1.month=d1.month+i;
		} 
		else if(p>31&&d1.date==31)
		{
			d1.date=0;
			p=p-30;
			d1.date=d1.date+p;
			i=2;
			d1.month=d1.month+i;
	}
	if(d1.month==13)
	{
		d1.month=2;
		d1.year++;
		d1.date--;
		
	}
		if(d1.month==2){
		
	
		k=28-d1.date;
		p=45-k;
		d1.date=d1.date+k;
		if(p<=28&&d1.date==28)
		{
			d1.date=0;
			d1.date=d1.date+p;
			i=1;
			d1.month=d1.month+i;
		} 
		else if(p>28&&d1.date==28)
		{
			d1.date=0;
			p=p-28;
			d1.date=d1.date+p;
			i=2;
			d1.month=d1.month+i;
	}
}

}
puts("***************************Date After Adding 45 Days in (dd,mm,yy)***************************");
printf("%d-%d-%d",d1.date,d1.month,d1.year);
}
                                                                                               
               