#include<iostream>
using namespace std;
int main()
{
int a[6],n,i,target,flag=0,low=0,high,mid;
cout<<"enter the size of array";
cin>>n;
for(i=0;i<n;i++)
{
cout<<"enter the element of array";
cin>>a[i];
}
cout<<"enter the target";
cin>>target;
high=n-1;
while(high>=low){
mid=(low+high)/2;
if(target==a[mid])
{
cout<<"target is present at "<<"a["<<mid<<"]";
break;
}
else if(target>a[mid])
{
low=mid+1;
}
else{
high=mid-1;
}}
if(low>high)
{
cout<<"target is not present";
}
return 0;
}