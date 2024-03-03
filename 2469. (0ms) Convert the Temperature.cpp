class Solution {
public:
    vector<double> convertTemperature(double celsius) {
        double kelvin = celsius + 273.15;
        double fahrenheit = celsius * 1.80 + 32.00;
        
        vector<double> temp;
        temp.push_back(kelvin);
        temp.push_back(fahrenheit);
        
        return temp;

    }
};