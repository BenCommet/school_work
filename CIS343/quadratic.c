#include <stdio.h>
#include <math.h>

float quadraticPositive(float a, float b, float c){
        float x = ((-1.0 * (b)) + sqrtf(( powf(b, 2.0)) - (4.0 * a * c)))/(2.0 * a);
        return x;

}

float quadraticNegative(float a, float b, float c){
float x = ((-1.0 * (b)) - sqrtf(( powf(b, 2.0)) - (4.0 * a * c)))/(2.0 * a);
        return x;

}

int main(void){
        float a;
        float b;
        float c;

        printf("Please input a value for a: ");
        scanf("%f", &a);
        printf("Please input a value for b: ");
        scanf("%f", &b);
        printf("Please input a value for c: ");
        scanf("%f", &c);

        float positive = quadraticPositive(a,b,c);
        float negative = quadraticNegative(a,b,c);

	printf("The positive root is: %f \n", (positive));
	printf("The negative root is: %f \n", (negative));
}
