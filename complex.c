 #include<stdio.h>

 struct Complex {
    float real, imag;
 };

 void swap (struct Complex *a, struct Complex *b){
    struct Complex temp = *a;
    *a = *b;
    *b = temp;
 }

 int main()
 {
    struct Complex c1= {2.0, 3.0}, c2={4.0, 5.0};

    printf("Before swap: c1 = %.1f + %.1fi, c2= %.1f + %.1fi\n", c1.real, c1.imag, c2.real, c2.imag);
    swap(&c1, &c2);
    printf("After swap: c1= %.1f + %.1fi, c2=")
 }