/*Write a program to store roll number and
marks obtained by 4 students side by side in a
matrix.*/

#include<iostream>
using namespace std;

// function marks and roll number input
void studentInput(int marks[4][2]){
    char student = 'a';
    for(int i=0;i<4;i++){
        cout << "Enter roll no of student " << char(student+i) << " : ";
        cin >> marks[i][0];
        cout << "Enter marks of student " << char(student+i) << " : ";
        cin >> marks[i][1];
    }
    return;
}