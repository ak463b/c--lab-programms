#include<iostream>
using namespace std;
typedef struct complex {
float real;
float imag;
} complexNumber;
complexNumber addcomplexNumber(complex, complex);
int main()
{
    complexNumber num1,num2,complexSum;
    char signOfimag;
    cout<<"Enter the first complex number," <<endl;
    cout<<"Enter the real and imaginary parts respectively:" <<endl;
    cin>>num1.real >>num1.imag;
    cout <<endl;
    cout<<"Enter the second complex number," <<endl;
    cout<<"Enter the real and imaginay parts respectively:" <<endl;
    cin>>num2.real >>num2.imag;
    complexSum = addcomplexNumber(num1, num2);
    signOfimag = (complexSum.imag > 0) ? '+' : '-';
    complexSum.imag = (complexSum.imag > 0) ? complexSum.imag : -complexSum.imag;
    cout << "Sum = " << complexSum.real << signOfimag << complexSum.imag <<"i";
    return 0;
}
complexNumber addcomplexNumber(complex num1, complex num2){
    complex temp;
    temp.real = num1.real + num2.real;
    temp.imag = num1.imag + num2.imag;
    return(temp);
}
