

/*
#include<bits/stdc++.h>
#define S 50

using namespace std;
int main()
{
    int n, i;
    float x[S], y[S], sumX=0, sumX2=0, sumY=0, sumXY=0, a, b;

    // Input
    cout<<"How many data points? ";
    cin>>n;

    cout<<"Enter data:"<< endl;

    for(i=1; i<=n; i++)
    {
        cout<<"x["<< i <<"] = ";
        cin>>x[i];
        cout<<"y["<< i <<"] = ";
        cin>>y[i];
    }

    // Calculating Required Sum
    for(i=1; i<=n; i++)
    {
        sumX = sumX + x[i];
        sumX2 = sumX2 + x[i]*x[i];
        sumY = sumY + y[i];
        sumXY = sumXY + x[i]*y[i];
    }
    // Calculating a and b
    b = (n*sumXY-sumX*sumY)/(n*sumX2-sumX*sumX);
    a = (sumY - b*sumX)/n;

    //Displaying value of a and b
    cout<<"Calculated value of a is "<< a << "and b is "<< b << endl;
    cout<<"Equation of best fit is: y = "<< a <<" + "<< b<<"x";

    return(0);
}
*/


#include <bits/stdc++.h>
using namespace std;

// Function for Linear Regression
void linearRegression(vector<double> x, vector<double> y, double predictWeight) {
    double sumX = 0, sumX2 = 0, sumY = 0, sumXY = 0;
    int n = x.size();

    // Summations for the formula
    for (int i = 0; i < n; i++) {
        sumX += x[i];//x er sum
        sumX2 += x[i] * x[i];//x^2 er sum
        sumY += y[i];//y er sum
        sumXY += x[i] * y[i];//xy er sum
    }

    // Calculating coefficients a and b for y = a + bx
    double b = (n * sumXY - sumX * sumY) / (n * sumX2 - sumX * sumX);
    double a = (sumY - b * sumX) / (double)n;

    // Print the equation of the line
    cout << "The linear regression line is: y = " << a << " + " << b << "x" << endl;

    // Predict the height for 159 lbs
    double predictedHeight = a + b * predictWeight;
    cout << "Predicted height for " << predictWeight << " lbs is: " << predictedHeight << " inches" << endl;

    // Calculate Mean Squared Error (MSE)
    double mse = 0;
    for (int i = 0; i < n; i++) {
        double y_pred = a + b * x[i];
        mse += (y[i] - y_pred) * (y[i] - y_pred);
    }
    mse /= n;
    cout << "Mean Squared Error (MSE): " << mse << endl;
}

int main() {
    // Input data: Weight (lbs) and Height (inches)
    vector<double> x = {140, 155, 212, 179, 192, 200};  // Weight in lbs
    vector<double> y = {60, 62, 75, 70, 71, 72};        // Height in inches

    // Predict height for 159 lbs
    double predictWeight = 159;

    // Perform Linear Regression and predict height
    linearRegression(x, y, predictWeight);

    return 0;
}
