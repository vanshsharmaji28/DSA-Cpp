#include<iostream>
using namespace std;

int main (){
    int num=5;
    double n=3.7;
    double *p2=&n;
    int *p1=&num;
    cout<<num <<endl<<&num<<endl;
    cout<<"pointer adress value is " <<endl<<p1<<endl;
    cout<<"pointer value is " <<endl<<*p1<<endl;
    cout<<"pointer size is " <<endl<<sizeof(p1)<<endl<<endl;

    int *q1=p1;
    double *q2=p2;

    cout<<p1<<"====="<<q1<<endl<<endl;

    int *t=&num;
    (*t)++;
    cout<<" dekhna hai  "<<*t<<endl;


    return 0;
}