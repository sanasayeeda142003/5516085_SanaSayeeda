#include<stdio.h>
int main(){
    int day;
        for(int i=1;i<10;i++){
        printf("Enter any day between 1 to 7: ");
        scanf("%d",&day);
        if (day>0 && day<8){
        break;
        }
        else{
            continue;
        }
    }

    switch(day){
        case 1 :
          printf("Monday");
          break;
        case 2 :
           printf("Tuesday");
           break;
        case 3 :
          printf("Wednesday");
          break;
        case 4 :
           printf("Thursday");
           break;
        case 5 :
          printf("Friday");
          break;
        case 6 :
           printf("Saturday");
           break;
        case 7 :
           printf("Sunday");
           break;
        
    
    }
}