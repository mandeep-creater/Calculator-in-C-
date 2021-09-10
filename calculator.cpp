#include<iostream>
using namespace std;


class work
{

    float a,b,c,add,sub, multiply,divide;
    char opr;
public:
    void input(void);
    void output(void);


};

void work:: input(void)
{
    cout <<" enter the value of a = ";
    cin>>a;//help of function overloading

    cout <<" enter the value of b = ";
    cin>>b;
    cout<<"enter your opr(+,-,*,/) = ";
    cin>>opr;

}
void work:: output(void)
{
    switch(opr)
    {
    case'+':
        add=a+b;

        cout<<endl<<" the addition of "<<a<<opr<<b<<" = "<<add;
        break;

    case'-':
        sub=a-b;

        cout<<" the subtraction of "<<a<<opr<<b<<" = "<<sub;
        break;

    case'*':
        multiply=a*b;

        cout<<" the multiplication of "<<a<<opr<<b<<" = "<<multiply;
        break;

    case'/':
        divide=a/b;

        cout<<" the division of "<<a<<opr<<b<<" = "<<divide;
        break;
    case 'defalut':
        cout<<"invalid operator";

    }

}


int main()
{
    work b;
    b.input();
    b.output();

    return 0;
}
