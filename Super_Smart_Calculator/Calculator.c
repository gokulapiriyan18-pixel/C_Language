#include<stdio.h>
int add(int a, int b){
    return a+b;
}
int sub(int a, int b){
    return a-b;
}
int mul(int a, int b){
    return a*b;
}
float divide(int a, int b){
    return (float)a/b;
}
int main(){
    while (1){
        printf("\t\tBASIC CALCULATOR\n");
        printf("\t\t----------------\n");
        printf( "1. Addition\n"
                "2. Subtraction\n"
                "3. Multiplication\n"
                "4. Division\n"
                "5. Close/Exit\n"
            
            );
        printf("Enter Your choice : ");
        int choice,a,b;
        scanf("%d",&choice);
        if(choice >=1 && choice<=4){
            printf("Enter two numbers: ");
            scanf("%d %d",&a,&b);
        }
        switch(choice){
            case 1:
                printf("Result = %d\n",add(a,b));
                break;
            case 2:
                printf("Result = %d\n",sub(a,b));
                break;
            case 3:
                printf("Result = %d\n",mul(a,b));
                break;
            case 4:
                if(b==0){
                    printf("Cannot Divide by zero\n");
                    break;
                }
                else{
                    printf("Result = %.2f\n",divide(a,b));
                    break;
                }
            case 5:
                return 0;
            default:
                printf("Please Enter A Valid Choice!\n");
        }
    };
    return 0;

}