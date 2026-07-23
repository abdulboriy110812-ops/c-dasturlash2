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
          printf("Congratulations!\nYou passed.");         
        }else{
            printf("Attendance is too low.");
        }
      }else{
        printf("Failed exam");
      }
      
    }else{
        printf("Too young");
    }

}

int main(void) {
    mashq1();
    mashq2();

    return 0;
}