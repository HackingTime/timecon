#include <stdio.h>
int main(){
int hr=12345;
int min=12345;

printf("Please 24hr time to be converted to 12hr time.\n"); 
printf("Time: "); 
scanf("%d:%d", &hr, &min);
if ((min == 12345) || (hr == 12345)){
printf("Please enter a 24hr time in this format: 13:25\n "); 
return 1;
}

if ((min < 0) || (hr < 0)){
printf("Please enter a 24hr time in this format: 13:25\n "); 
return 1;
}

if ((min > 59) || (hr > 24)){
printf("Please enter a 24hr time in this format: 13:25\n "); 
return 1;
}
//if (hr == 12){
//printf("%d:%d\n", hr, min); 
//return 1;
//}
if (hr == 12){
if (min < 10){
printf("%d:0%d PM\n", hr, min); 
return 1;
}
printf("%d:%d PM\n", hr, min); 
return 1;
}

if (hr == 24){
if (min < 10){
printf("%d:0%d AM\n", hr, min); 
return 1;
}
printf("%d:%d AM\n", hr, min); 
return 1;
}

if (hr < 12){
if (min < 10){
printf("%d:0%d AM\n", hr, min); 
return 1;
}
printf("%d:%d AM\n", hr, min); 
return 1;
}
hr = hr - 12;
if (min < 10){
printf("%d:0%d AM\n", hr, min); 
return 1;
}
printf("%d:%d PM\n", hr, min); 
}
