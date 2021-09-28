#include<stdio.h>
struct time
{
	float hour;
    float min;
    float sec;
}t1,t2,t3;
int main()
{
    printf("Enter the first time in HH MM SS format :\n");
    scanf("%f %f %f",&t1.hour,&t1.min,&t1.sec);
    printf("Enter the second time in HH MM SS format :\n");
    scanf("%f %f %f", &t2.hour, &t2.min, &t2.sec);
    t3.hour=t1.hour+t2.hour;
    t3.min=t2.min+t1.min;
    t3.sec=t1.sec+t2.sec;
    if(t3.sec>59)
    {
        t3.min++;
        t3.sec=t3.sec-60;
    }
    if (t3.min > 59)
    {
        t3.hour++;
        t3.min = t3.min - 60;
    }
    printf("%.2f %.2f %.2f",t3.hour,t3.min,t3.sec);
    return 0;
}