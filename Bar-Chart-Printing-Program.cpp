/*(Bar-Chart Printing Program) One interesting application of computers is to display 
graphs and bar charts. Write an application that reads five numbers between 1 and 30. 
For each number that’s read, your program should display the same number of adjacent 
asterisks. For example, if your program reads the number 7, it should display ******* .
Display the bars of asterisks after you read all five numbers. (c++ how to program) */

#include <iostream>
using namespace std ;

int main (){

    unsigned int a(0), x(1) ;

    cout << " Enter 5 numbers (between 1 and 30) :" ;
    while(x<=5) {

        cout << endl << " Enter number " << x << endl ;
        cin >> a ; 
        if (a>=1 & a<=30){
            for (int y(1) ; y<=a ; y++){
                cout << "*" ;
            }

            x++ ;
            
    }

    }
    cout << endl ;

}