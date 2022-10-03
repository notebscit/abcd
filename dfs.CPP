#include<iostream.h>
#include<conio.h>

int i,j,k,t,a[10][10],s[10],n,ed ,v;
void main(){
cout<<"Enter No of vertices \n";
cin>>n;

cout<<"Enter no. of edges\n";
cin>>ed;
cout<<"Enter Edges";
for(k=1;k<=ed;k++)
{
cin>>i>>j;
a[i][j]=1 ;
}
cout<<"Enter Initial node\n";
cin>>v;
cout<<"Output :\n";
cout<<v<<"\t";
k=1;
while(k<n){
for(j=n;j>=1;j--)
{
if(a[v][j]!=0)
{
s[t]=j;
t++;
}
}
v=s[--t];
cout<<v<<"\t";
k++;
}
getch();
}
