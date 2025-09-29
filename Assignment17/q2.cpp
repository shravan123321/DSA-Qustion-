//q1 and define a method creategraph() to create and store adjacent node.
#include<iostream>
using namespace std;
class graphmatrix{
    private:
       int v_count;
       int e_count;
       int **adj;
    private:
       void creategraph(int,int);
};

void graphmatrix::creategraph(int vno,int eno){
    int u,v;
    v_count=vno;
    e_count=eno;
    adj=new int*[v_count];
    for(int i=0; i<v_count; i++)
       adj[i]=new int[v_count];
    for(int i=0; i<v_count; i++){
        for(int j=0; j<v_count; j++)
            adj[i][j]=0;
    }
    for(int k=1; k<e_count; k++){
        cout<<"enter the node number count edg ";
        cin>>u>>v;
        adj[u][v]=1;
        adj[v][u]=1;
}