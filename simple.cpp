#include <iostream>
#include <fstream>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string>


/*
 
 This produces the coordinates to sample a circle of radius 1 with each point corresponding to an equal area of the circle (and therefore an equal projected area if you're looking at a sphere)
 
 N is the number of rings of points
 
 beta_0 is the number of points on the innermost ring (we require beta_0 > 1, in order to make it make sense at the centre, and if beta_0 \approx Pi, then the areas will be approximately square (so betq_0 = 3 is a good choice))
 
 alpha counts which ring you are on (it runs from 0 (at the centre) to N-1 (at the outer edge))
 
 j counts how far around in phi you are on a ring (it runs from 0 to (beta_0*(2*alpha + 1) - 1))
 
 */


using namespace std;


int sigmoid(double* x, double* y);

int neuron(int no_inputs, double x[], double w[], double* bias, double* output);

int main()
{

    double x, y;

    x = 1.0;

    sigmoid(&x, &y);

    cout << "sigmoid(x) = " << y << "\n";

    

    
    
}


// Here I define my functions

int sigmoid(double* x, double* y) {

    *y = 1.0 / (1.0 + exp(-(*x)));

    return(0);


}



int neuron(int no_inputs, double x[], double w[], double* bias, double* output); {

    double z;

    

}





