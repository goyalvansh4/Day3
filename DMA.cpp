#include<iostream>
using namespace std;

int main(){

int n;
cout<<"Enter the number of elements"<<endl;

cin>>n;

int *p = new int[n];
for(int i=0;i<n;i++){
cin>>p[i];
}
int max=-1;
for(int i=0;i<n;i++)
{
if(p[i]>max){
max=p[i];
}
}
cout<<max<<endl;
}
