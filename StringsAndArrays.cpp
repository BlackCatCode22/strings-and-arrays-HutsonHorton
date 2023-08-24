
//  StringsAndArrays
//  8/23/23
//  Programmed by Hutson Horton
//  Create an Array, Initialized, Uninitalized, Use a for loop to navigate the array


#include <iostream>

using namespace std;

int main()
{
    //Welcome the user and explain the program
        cout << "Welcome to my StringsAndArrays Program! This is a demo for strings and arrays!\n";


    //Initalize Array, Tell forloop how big the array is
        int numArray[7] = {4, 8, 15, 16, 23, 42};


    //Output Array

        cout << "Expected 4:  " << numArray[0] << endl;
        cout << "Expected 8:  " << numArray[1] << endl;
        cout << "Expected 15:  " << numArray[2] << endl;
        cout << "Expected 16:  " << numArray[3] << endl;
        cout << "Expected 23:  " << numArray[4] << endl;
        cout << "Expected 42:  " << numArray[5] << endl;
        cout << "Expected ??:  " << numArray[6] << " < This part of the array was not initialized by the programmer.\n\n" << endl;

    //For Loop to output one dimensional array
    //for loop syntax is for(sets variable ;defines the condition in which it runs;
    //increase or decrease the variable until the stop condition is reached


    for(int i = 0; i < 20; i++ ){
        cout << "\n\n" << i << "   " << numArray[i] << endl;

    }


   //Hardcoded 2 Dimensional Array

        int numberGrid[3][2] = {
            {1,2},
            {3,4},
            {5,6},


    };


        cout << "\n";

    //Output 2 Dimensional Array in Matrix Format

        for(int i = 0; i < 3; i++){

            for(int j = 0; j < 2; j++){
                cout << numberGrid[i][j] << "  ";
            }
                    cout << endl;
    }


    cout << "\n\n\n";

    //Define First part of Array, have loop fill in the rest.

    int my2darray[3][2];
    int row0col0 = 71;



    //Fill 2D Array with a nested for() loop


        for(int i = 0; i < 3; i++){

            for(int j = 0; j < 2; j++){
                    my2darray[i][j] = row0col0++;

                    cout << my2darray[i][j] << "  ";
            }
    //Subtract 2 because row0col0 is incremented in the loop
                    row0col0 = row0col0 -2;
                    row0col0 += 10;
                    cout << endl;
    }















    return 0;
}

