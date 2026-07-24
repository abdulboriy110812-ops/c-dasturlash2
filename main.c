#include <stdio.h>

void mashq1(void) {
    int age, ball;
    scanf("%d%d",&age,&ball);

    if(age >= 18){

      if(ball >= 70){

        printf("Passed");
      }else{
        printf("Failed");
      }
      
    }else{
        printf("Too young");
    }

}


void mashq2(void) {
    int age, ball,atendance;
    scanf("%d%d%d",&age,&ball,&atendance);

    if(age >= 18){

      if(ball >= 70){
        if(atendance >= 90){
          printf("Congratulations!\nYou passed.\n");         
        }else{
            printf("Attendance is too low.\n");
        }
      }else{
        printf("Failed exam\n");
      }
      
    }else{
        printf("Too young\n");
    }
}

void mashq3(void) {
     int yosh = 18;
     int xujjat = 1;

     if(yosh >= 18 && xujjat == 1){
        printf("MAshina xaydashga ruxsat");
     }else{
        printf("MAshina xaydashga ruxsat emas");
     }

}



int main(void) {
    mashq1();
    mashq2();
    mashq3();

    return 0;
}