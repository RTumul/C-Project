#include <iostream>
#include<string.h>
using namespace std;
int id(int studentId)
{

    cout<<"Enter student id: ";
    cin>>studentId;
    return(studentId);

}
string name(string studentName)
{
    char firstName[20],lastName[20];
    cout<<"Enter first name of student: ";
    cin>>firstName;
    cout<<"Enter last name of student: ";
    cin>>lastName;
    strcat(firstName," ");
    strcat(firstName,lastName);
    studentName=firstName;
    return(studentName);

}
string mail(string email)
{
    cout<<"Enter the email address: ";
    cin>>email;
    return(email);
}
int contact(long int number)
{
    cout<<"Enter the Contact number: ";
    cin>>number;
    return(number);
}
string studentDep(string department)
{
    cout<<"Enter the department: ";
    cin>>department;
    return(department);
}
string studentProg(string program)
{
    int a;
    cout<<"Which program are you doing?"<<endl;
    cout<<"Enter 1 for Undergraduate"<<endl;
    cout<<"Enter 2 for Graduate"<<endl;
    cin>>a;
    if(a==1)
    {
        program="Undergraduate";
    }
    else if(a==2)
    {
        program="Graduate";
    }
    else
    {
        program="Invalid";
    }
    return (program);
}
string address(string studentAddress)
{
    cout<<"Enter the address:";
    cin>>studentAddress;
    return(studentAddress);
}



int main()
{
    int n;
    cout<<"Enter the number of students:";
    cin>>n;
    int i,studentId[n];
    long int phoneNumber[n];
    string studentName[n],studentEmail[n];
    string studentDepartment[n],studentProgram[n];
    string studentAddress[n];
    int studentId1;
    long int phoneNumber1;
    string studentName1,studentEmail1;
    string studentDepartment1,studentProgram1;
    string studentAddress1;
    for(i=0;i<n;i++)
    {
        cout<<"Entering the information of student "<<i+1<<endl;

        studentId[i]=id(studentId1);


        studentName[i]=name(studentName1);



        studentEmail[i]=mail(studentEmail1);


        phoneNumber[i]=contact(phoneNumber1);


        studentDepartment[i]=studentDep(studentDepartment1);


        studentProgram[i]=studentProg(studentProgram1);


        studentAddress[i]=address(studentAddress1);
    }
   for(i=0;i<n;i++)
   {
       cout<<"Information of student "<<i+1<<endl;
       cout<<"Id: "<<studentId[i]<<endl;
       cout<<"Name: "<<studentName[i]<<endl;
       cout<<"Email: "<<studentEmail[i]<<endl;
       cout<<"Phone Number: "<<phoneNumber[i]<<endl;
       cout<<"Department: "<<studentDepartment[i]<<endl;
       cout<<"Program: "<<studentProgram[i]<<endl;
       cout<<"Address: "<<studentAddress[i]<<endl;
   }

    return 0;
}
