#include <stdio.h>
#include <stdlib.h>

typedef struct complex{
  double real; 
  double imag; 
}complex;

complex add(complex a, complex b){
  complex temp;
  temp.real = a.real + b.real;
  temp.imag = a.imag + b.imag;
  return temp;
}

complex multiply(complex a, complex b){
  complex temp;
  temp.real = (a.real * b.real) - (a.imag * b.imag);
  temp.imag = (a.real * b.imag) + (a.imag * b.real);
  return temp;
}

complex negate(complex a){
	complex temp;
	temp.real = - (a.real);
	temp.imag = - (a.imag);
	return temp;
}

complex inversion(complex a){
	complex temp;
	temp.real = a.real / (a.real * a.real + a.imag * a.imag);
	temp.imag = (- a.imag) / (a.real * a.real + a.imag * a.imag);
	return temp;
}

int main(void) {
	complex a, b;
	a.real = 7;
	a.imag = 5;
	b.real = -3;
	b.imag = 9;

	complex sum = add(a,b);
	complex product = multiply(a,b);
	complex neg = negate(a);
	complex difference = add(a,negate(b));
	complex inverse = inversion(a);

	printf("   Lets Test    ");
	printf("Complex Number a is %f + %f i\n",a.real,a.imag);
	printf("Complex Number a is %f + %f i\n",b.real,b.imag);
	printf("a + b is %f + %f i\n",sum.real,sum.imag);
	printf("a - b is %f + %f i\n",difference.real,difference.imag);
	printf("a * b is %f + %f i\n",product.real,product.imag);
	printf("The negation of a is %f + %f i\n",neg.real,neg.imag);
	printf("The inverse of a is %f + %f i\n",inverse.real,inverse.imag);

}
