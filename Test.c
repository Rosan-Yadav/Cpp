

// //  Write a C program to Add And Multiply two complex numbers by passing structure to a Function.

// //  CODE:

// #include <stdio.h>

// // Structure Is Being Defined
// struct Complex {
//     float real;
//     float imaginary;
// };

// // Function Adding Two Complex Numbers
// struct Complex addComplex(struct Complex num1, struct Complex num2) {
//     struct Complex result;

//     result.real = num1.real + num2.real;
//     result.imaginary = num1.imaginary + num2.imaginary;

//     return result;
// }

// // Function Multiplying Two Complex Numbers
// struct Complex multiplyComplex(struct Complex num1, struct Complex num2) {
//     struct Complex result;

//     result.real = (num1.real * num2.real) - (num1.imaginary * num2.imaginary);
//     result.imaginary = (num1.real * num2.imaginary) + (num1.imaginary * num2.real);

//     return result;
// }

// int main() {
//     // Defining Two Complex Number Variables
//     struct Complex num1, num2;

//     // Input for first complex number
//     printf("1.  Real Part :: ");
//     scanf("%f", &num1.real);
//     printf("    Imaginary Part :: ");
//     scanf("%f", &num1.imaginary);

//     // Input for second complex number
//     printf("2.  Real Part :: ");
//     scanf("%f", &num2.real);
//     printf("    Imaginary Part :: ");
//     scanf("%f", &num2.imaginary);

//     // Add two complex numbers
//     struct Complex sum = addComplex(num1, num2);
//     printf("Sum: %.2f + %.2fi\n", sum.real, sum.imaginary);

//     // Multiply two complex numbers
//     struct Complex product = multiplyComplex(num1, num2);
//     printf("Product: %.2f + %.2fi\n", product.real, product.imaginary);

//     return 0;
// }

#include <stdio.h>
#define N 100
int main(){
    
    int array[N],Num;
    printf("Type Number Of Elements :: ");
    scanf("%d ",&Num);
    for(int i=0;i<Num;i++)    scanf("%d",&array[i]);
    // //  Bubble Sorting 
    // for (int i=0;i < Num -1;i++){
    //     for(int j=0; j<Num-i-1 ;j++){
    //         if(array[j] > array[j+1]){
    //             int temp = array[j];
    //             array[j] = array[j+1];
    //             array[j+1] = temp;
    //         }
    //     }
    // }

    
    // //  Selection Sorting 
    // int min_num;
    // for (int i=0;i<Num;i++){
    //     min_num=i;
    //     for(int j=i+1;j<Num;j++){
    //         if(array[j]<array[min_num]){
    //             min_num=j;
    //         }
    //     }
    //     int temp=array[i];
    //     array[i]=array[min_num];
    //     array[min_num]=temp;
    // }


    // //  Inseritng Sorts
    // int key,j;
    // for(int i=1;i<Num;i++){
    //     key = array[i];
    //     j=i-1;
    //     while (j>=0 && array[j]>key)
    //     {
    //         array[j+1]=array[j];
    //         j=j-1;
    //     }
    //     array[j+1]=key;
    // }

    printf("Numbers Sorted Are : ");
    for(int i=0;i<Num;i++)  printf("%d ",array[i]);
    return 0;
}