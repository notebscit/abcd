#include<iostream.h>
#include<conio.h>

int a[10][10],i,j,k,f=0,r=0,v,ed,n,q[10];
void main()
{
clrscr();
cout<<"Enter No of vertices\n";
cin>>n;
cout<<"Enter No of edges\n";
cin>>ed;
out<<"Enter Edges\n";
for(k=1;k<=ed;k++)
{
cin>>i>>j;
a[i][j]=1;
}

cout<<"Enter Initial node\n";
cin>>v;

cout<<"Output\n";
cout<<v<<"\t";

k=1;
while(k<n){

for(j=1;j<=n;j++)

if(a[v][j]!=0)
{
q[r++]=j;
}

v=q[f++];

cout<<v<<"\t";
k++;
}
getch();
}
