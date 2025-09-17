#include<stdio.h>
int main(){
    float weight,height,bmi;
    printf("Enter weight in kg: ");
    scanf("%f",&weight);
    printf("Enter height in m: ");
    scanf("%f",&height);
    bmi = weight / height*height;
    printf("%f %f",bmi,bmi);
    if(bmi < 15){
        printf("Person is starvation\n");
    
    }
    else if(bmi <= 17.5){
        printf("Person is Anorexic\n");
    }
    else if(bmi <=18.5){
        printf("Person is underweight\n");
    }
    else if(bmi <= 24.9){
        printf("Person is ideal\n");
    }
    else if(bmi <= 25.9){
        printf("Person is overweight\n");
    }
    else if(bmi <= 39.9){
        printf("Person is obese\n");
    }
    else{
        printf("Person is morbidity obese\n");
    }
    return 0;

}