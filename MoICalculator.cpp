/*Naren G. Kolli - Psuedocode
 * Welcome the user to the program
 * Start a loop; the loop ends if the user do not want to continue
 * Write 3 functions to prompt the user to input the dimensions and calculate the area moment of
 * inertial with respect to x axis.
 * Ask the user to choose the shape of the beam cross-section
 * Call the associated function
 * Display the value of the area moment of inertia for the requested shape.
 * Ask the user if they want to continue.*/

#include <iostream>
#include <math.h>

using namespace std; //declare namespace

char shape, playAgain = 'y'; //declare character variables
double height, base, radius, inertia, pi = 3.14159; //declare doubles

int main() {


    //while loop so the user can run the program multiple times
    while (playAgain == 'y')
    {
        //ask the user what shape and save response in shape
        cout<<"What shape is the cross section? (t=triangle, r=rectangle, c=circle)"<<endl;
        cin>>shape;

        //if loop runs if the user enters a triangle
        if (shape == 't') {
            //asks for the height and base dimensions
            cout << "Please enter the dimensions of the triangular beam" << endl;
            cout << "Height (mm) = ";
            cin >> height;
            cout << "Base (mm) = ";
            cin >> base;
            //calculates inertia
            inertia = ((base * pow(height, 3)) / 12);
            //displays inertia value
            cout << "The moment of inertia is " << inertia <<"mm"<< endl;

        }
        //rectangle loop
        else if (shape == 'r') {
            //asks for height and base measurements
            cout << "Please enter the dimensions of the rectangular beam" << endl;
            cout << "Height (mm) = ";
            cin >> height;
            cout << "Base (mm) = ";
            cin >> base;
            //calculates inertia
            inertia = ((base * pow(height, 3)) / 12);
            //displays inertia
            cout << "The moment of inertia is " << inertia <<"mm"<< endl;

        }
        //circle loop
        else if (shape == 'c') {
            //asks for radius
            cout << "Please enter the dimensions of the circular beam" << endl;
            cout << "Radius (mm) = ";
            cin >> radius;
            //calculates inertia
            inertia = ((pi/4)*pow(radius, 4));
            //displays inertia
            cout << "The moment of inertia is " << inertia<<"mm" << endl;

        }
        //asks the user if they would like to play again
        cout << "Would you like to start a new calculation?";
        cin >> playAgain;
    }
    return 0;
}