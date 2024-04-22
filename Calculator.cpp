// Calculator.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <ctype.h>
using namespace std;

void print(float pr)
{
    std::cout << " = " << pr << "\n";
}

float sum(float a, float b)
{
    float x = a + b;
    return x;
}

float dif(float a, float b)
{
    float x = a - b;
    return x;
}

float mult(float a, float b)
{
    float x = a * b;
    return x;
}

float div(float a, float b)
{
    float x = a / b;
    return x;
}

int main()
{
    std::cout << "Enter an expression \n";

    int result = 0;
    std::string input;
    start:
    getline(cin, input);
           
    for (int i = 0; i < input.size(); i++)
    {
        //std::cout << "input[i]" << input[i] << "\n";
        int num = 0;
        int numloc = 0;
        if (input[i] == ' ') continue;

        
                   
        if (isdigit(input[i] == 0))
        {
            char x = input[i];
            switch (x)
            {
            case '+':
                result += num;
                    break;
            case '-':
                result -= num;
                    break;
            case '*':
                result *= num;               
                break;
            case '/':
                result /= num;               
                break;
            default:
                std::cout << "Ty dolbaeb? \n";
                break;
            }
        }
        if (isdigit(input[i - 1]) != 0);
        else
        {
            int count = 0;
            for (int j = 0; i + j < input.size(); j++)
            {                
                if (isdigit(input[i + j]) != 0) 
                    count++;
                else break;
            }
            for (int y = 0; y < count; y++)
            {
                num += (input[i + y] - '0') * pow(10, (count - y - 1));
            //std::cout << "num " << num << "\n";            
            }
            int count2 = 0;
            int space = 0;
            for (int j = 0; i + j + count < input.size(); j++)
            {    
                if (isdigit(input[i + j + count]) == 0)
                {
                    space++;
                    continue;                
                }
                if (isdigit(input[i + j + count]) != 0) 
                    count2++;
            }
            for (int y = 0; y < count2; y++)
            {
                numloc += (input[i + y + count + count2 + space] - '0') * pow(10, (count2 - y - 1));
                cout << "numloc " << numloc << endl;
                       
            }

        }
        

    }

    std::cout << "Result = " << result << "\n";
    goto start;

    

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
