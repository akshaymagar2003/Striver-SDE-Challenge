#include<bits/stdc++.h>

 

bool isafe(int row,int col,int matrix[][9],int num){

 

for(int i=0;i<9;i++){

    if(matrix[i][col]==num)return false;

}

for(int j=0;j<9;j++){

    if(matrix[row][j]==num)return false;

}

int rowstart=row-row%3;

int colstart=col-col%3;

for(int i=rowstart;i<rowstart+3;i++){

    for(int j=colstart;j<colstart+3;j++){

        if(matrix[i][j]==num)return false;

    }

}

return true;

 

}

 

bool solve(int matrix[][9]){

int row=-1;

int col=-1;

 bool flag=true;

 

for(int i=0;i<9;i++){

    for(int j=0;j<9;j++){

if(matrix[i][j]==0){

 

row=i;

col=j;

flag=false;

break;

 

}

    }

    if(!flag)break;

}

 

if(flag)return true;

for(int num=1;num<=9;num++){

if(isafe(row,col,matrix,num)){

 

matrix[row][col]=num;

if(solve(matrix))return true;

matrix[row][col]=0;

 

}

 

}

 

return false;

 

}

 

bool isItSudoku(int matrix[9][9]) {

return solve(matrix);

}
//copy and pasted
