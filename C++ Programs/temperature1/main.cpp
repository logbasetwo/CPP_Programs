////////////////////////////////////////////////////////////////////////
// Program that takes input from the user on converting a temperature //
// from Fahrenheit to Celsius, or Celsius to Fahrenheit. Then the     //
// return value is displayed in Kelvin as well. This is mainly a      //
// demonstration of classes and objects in C++.                       //
//                                                                    //
//    Created by Matthew Balogh                                       //
////////////////////////////////////////////////////////////////////////

#include <iostream>

using namespace std;

class Celsius{
public:
    float setValue(float c){ //sets the value to be used to be converted
        value = c;
        convertedValue = value * 9 / 5 + 32; //f = c * 9 / 5 + 32
    }
    float getValue(){ //necessary to obtain reasonable numbers. Returns the value of value so that conversion is complete.
        return value;
    }
    float getConvertedValue(){ //returns final converted answer.
        return convertedValue;
    }
private:
    float value;
    float convertedValue;
};


class Fahrenheit{
public:
    float setValue(float f){ //sets the value to be used to be converted
        value = f;
        convertedValue = (value - 32)*5/9; //c = (f - 32) * 5 / 9;
    }
    float getValue(){ //necessary to obtain reasonable numbers. Returns the value of value so that conversion is complete.
        return value;
    }
    float getConvertedValue(){ //returns final converted answer.
        return convertedValue;
    }
private:
    float value;
    float convertedValue;
};



int main()
{
    float value1;
    float kelvin;
    char type;
    cout << "Do have a celsius or fahrenheit degree value? Press c for celsius and f for " << endl
         << "fahrenheit: ";
    cin >> type;

    if(type == 'C' || type == 'c'){
        cout << "Enter a temperature value: ";
        cin >> value1;
        cout << "\n";
        Celsius metricObject; //sets an object for a class to be used
        metricObject.setValue(value1); //sets the value of the function setValue to the value of the variable value1
        kelvin = value1 + 274; //kelvin converstion
        cout << "That is " << metricObject.getConvertedValue() << " degrees Fahrenheit, ";
        cout << "and " << kelvin << " degrees Kelvin." <<endl;
    }
    else if(type == 'F' || type == 'f'){
        cout << "Enter a temperature value: ";
        cin >> value1;
        cout << "\n";
        Fahrenheit englishObject;
        englishObject.setValue(value1);
        kelvin = englishObject.getConvertedValue() + 274;
        cout << "That is " << englishObject.getConvertedValue() << " degrees Celsius, ";
        cout << "and " << kelvin << " degrees Kelvin." <<endl;
    }
    else{
        cout << "Very funny! That was not one of the options. \n"; //Takes care of wrong character input
        return(0);
    }

    return(0);
}




