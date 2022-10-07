#include<stdio.h>
#include<string.h>
int givenyr(int y){
    if(y%4==0 & y%100!=0){
        return 0;
    }
    else if(y%100==0 & y%400==0){
        return 0;
    }
    else{
        return 1;
    }
}
void firstday(int n){
    int i,j,m=n%7;
    printf("S  M  T  W  T  F  S\n");
    switch(m)
    {
        case 0:
        i=18;
        break;
        case 1:
        i=0;
        break;
        case 2:
        i=3;
        break;
        case 3:
        i=6;
        break;
        case 4:
        i=9;
        break;
        case 5:
        i=12;
        break;
        case 6:
        i=15;
        break; 
    }
    for(j=0;j<i;j++){
        printf(" ");
    }
    printf("1");
}
void monthcalender(int i,int t){
    int m=i%7;
    if(t/10==0){
        printf("  ");
    }
    else{
        printf(" ");
    }
    if(m==1){
        printf("\n%d",t);
    }
    else{
        printf("%d",t);
    }
}
void printcalender(int days,int yr){
    int i,t,d,n;
    printf("\n------JANUARY------\n");
    n=days;
    t=2;
    days+=31;
    firstday(n);
    for(i=n+1;i<days;i++){
        monthcalender(i,t);
        t+=1;
    }
    t=2;
    printf("\n------FEBRUARY------\n");
    n=days;
    if(yr==0){
        days+=29;
    }
    else{
        days+=28;
    }
    firstday(n);
    for(i=n+1;i<days;i++){
        monthcalender(i,t);
        t+=1;
    }
    t=2;
    printf("\n------MARCH------\n");
    n=days;
    days+=31;
    firstday(n);
    for(i=n+1;i<days;i++){
        monthcalender(i,t);
        t+=1;
    }
    t=2;
    printf("\n------APRIL------\n");
    n=days;
    days+=30;
    firstday(n);
    for(i=n+1;i<days;i++){
        monthcalender(i,t);
        t+=1;
    }
    t=2;
    printf("\n------MAY------\n");
    n=days;
    days+=31;
    firstday(n);
    for(i=n+1;i<days;i++){
        monthcalender(i,t);
        t+=1;
    }
    t=2;
    printf("\n------JUNE------\n");
    n=days;
    days+=30;
    firstday(n);
    for(i=n+1;i<days;i++){
        monthcalender(i,t);
        t+=1;
    }
    t=2;
    printf("\n------JULY------\n");
    n=days;
    days+=31;
    firstday(n);
    for(i=n+1;i<days;i++){
        monthcalender(i,t);
        t+=1;
    }
    t=2;
    printf("\n------AUGUST------\n");
    n=days;
    days+=31;
    firstday(n);
    for(i=n+1;i<days;i++){
        monthcalender(i,t);
        t+=1;
    }
    t=2;
    printf("\n------SEPTEMBER------\n");
    n=days;
    days+=30;
    firstday(n);
    for(i=n+1;i<days;i++){
        monthcalender(i,t);
        t+=1;
    }
    t=2;
    printf("\n------OCTOBER------\n");
    n=days;
    days+=31;
    firstday(n);
    for(i=n+1;i<days;i++){
        monthcalender(i,t);
        t+=1;
    }
    t=2;
    printf("\n------NOVEMBER------\n");
    n=days;
    days+=30;
    firstday(n);
    for(i=n+1;i<days;i++){
        monthcalender(i,t);
        t+=1;
    }
    t=2;
    printf("\n------DECEMBER------\n");
    n=days;
    days+=31;
    firstday(n);
    for(i=n+1;i<days;i++){
        monthcalender(i,t);
        t+=1;
    }
}
int main(){
    int y,i,days=0,yr;
    printf("Enter the year from 2000");
    scanf("%d",&y);
    if(y==2000){
        days+=366;
    }
    else{
        for(i=2000;i<y;i++){
            if(i%4==0 & i%100!=0){
                days+=366;
            }
            else if(i%100==0 & i%400==0){
                days+=366;
            }
            else{
                days+=365;
            }
        }
    }
    yr=givenyr(y);
    printf("----%d YEAR CALENDER----",y);
    printcalender(days,yr);
    return 0;
}
