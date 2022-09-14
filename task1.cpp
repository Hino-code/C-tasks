#include <iostream>
using namespace std;

int main()
{
    int first = 1;
    int second = 2;
    int third = 3;
    int fourth = 4;
    int fy = 10;
    int sy = 11;
    int ty = 12;
    int fry = 13;
    int guess;
    int year_lvl;
    string Cguess1 = "Correct guess!";
    string Cguess2 = "wrong guess";

    cout<<"There are 4 different year levels, each year level have at least 10 students.\n\n";
    cout<<"Guess the number of student on the selected year level.\n\n";
    cout<<"enter a number between 1 to 4,each number represents the year level:\n";
    cout<<"1 - 1st Year\n";
    cout<<"2 - 2nd Year\n";
    cout<<"3 - 3rd Year\n";
    cout<<"4 - 4th Year\n";

    cout<<"Type your selected year level: ";
    cin>>year_lvl;
switch (year_lvl)
{
case 1:
    cout<<"Guess the First year students: ";
    cin>>guess;
    if (guess==fy)
    {
        do{
            cout<<Cguess1<<endl;
            guess--;
        }
        while (guess>0);}
    else if (guess<=0)
    {
        cout<<"";
    }
    else
    {
        do{
            cout<<Cguess2<<endl;
            guess--;
        }
        while (guess>0);}

    break;
case 2:
    cout<<"Guess the Second year students: ";
    cin>>guess;
    if (guess==sy)
    {
        do{
            cout<<Cguess1<<endl;
            guess--;
        }
        while (guess>0);}
    else if (guess<=0)
    {
        cout<<"";
    }
    else
    {
        do{
            cout<<Cguess2<<endl;
            guess--;
        }
        while (guess>0);}
    break;
case 3:
    cout<<"Guess the Third year students: ";
    cin>>guess;
    if (guess==ty)
    {
        do{
            cout<<Cguess1<<endl;
            guess--;
        }
        while (guess>0);}
    else if (guess<=0)
    {
        cout<<"";
    }
    else
    {
        do{
            cout<<Cguess2<<endl;
            guess--;
        }
        while (guess>0);}
    break;
case 4:
    cout<<"Guess the Fourth year students: ";
    cin>>guess;
    if (guess==fry)
    {
        do{
            cout<<Cguess1<<endl;
            guess--;
        }
        while (guess>0);}
    else if (guess<=0)
    {
        cout<<"";
    }
    else
    {
        do{
            cout<<Cguess2<<endl;
            guess--;
        }
        while (guess>0);}
    break;
}

    return 0;
}
