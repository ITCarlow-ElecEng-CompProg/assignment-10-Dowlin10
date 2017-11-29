// Mark Dowling
// C00216994
// Lab 10

#include <iostream>
#include <iomanip>

using namespace std;

void calculater (double r1,double r2,double c1,double *freq,double *dc)
{
    *freq = 1.44/((r1+(2*r2))*c1);
    *dc = (r1+r2)/(r1+(2*r2))*100.00;
}

int main(void)
{
    double res1, res2, cap1, freqo, duty;
    double *ptr_freqo, *ptr_duty;

    cout << "555 Timer Astable Multivibrator Calculations" << endl << endl;

    /**< initialize pointer so that it points to frequency */
	ptr_freqo = &freqo;
    /**< initialize pointer so that it points to duty cycle */
	ptr_duty = &duty;

    do
    {
        //Read in the values
        cout << "Enter a value for resistance 1 greater than 0: ";
        cin >> res1;
    }
    while (res1 <= 0);

    do
    {
        //Read in the values
        cout << "Enter a value for resistance 2 greater than 0: ";
        cin >> res2;
    }
    while (res2 <= 0);

    do
    {
        //Read in the values
        cout << "Enter a value for capacitance greater than 0: ";
        cin >> cap1;
    }
    while (cap1 <= 0);

    calculater(res1,res2,cap1,ptr_freqo,ptr_duty);
    cout << fixed;
    cout.precision(2);
    cout << "\nOutput frequency = " << freqo << " Hz" << endl;
    cout << "Duty Cycle = " << duty << "%" << endl;

    return 0;
}

