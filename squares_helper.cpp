#include <iostream>

// Absolute value function
double abs(double val)
{
    if(val < 0)
    {
        return (val * -1);
    } else 
    {
        return val;
    }
}


// Power Function
double Power(double b, int e)
{
    double final;
    
    final = b;

    if(e == 0)
    {
        return 1;

    } else if(e > 0)
    {
        for (int i = 0; i < (e-1); i++)
        {
            final *= b;
        }

    } else if(e < 0)
    {
        for (int i = 0; i < ((-1*e)-1); i++)
        {
            final *= b;
        }
        final = 1/final;
    }

    return final; 

}

// Square Root Function
double Sqrt(double v, int initial_guess = 1)
{
    double new_val = 0.5*(initial_guess + v / initial_guess);
    double error;

    do
    {
        new_val = 0.5*(new_val + v / new_val);
        error = 0.5*(new_val + v/new_val) - new_val;

    } while (abs(error) > 0.005);

    return new_val;
    
}

// More Data Function
bool MoreData()
{
    char yes_no;

    std::cout << "Would you like to process another pair of numbers?(y/n)" << std::endl;
    std::cin >> yes_no;

    while (true)
    {
        if(yes_no == 'y')
        {
            return true;
        } else if(yes_no == 'n')
        {
            return false;
        } else 
        {
            std::cout << "Would you like to process another pair of numbers?(y/n)" << std::endl;
            std::cin >> yes_no;
        }
    }
}
