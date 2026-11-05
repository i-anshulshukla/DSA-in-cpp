class Solution {
public:
    vector<double> convertTemperature(double celsius) {
        vector<double>answer;
        double kelvin=celsius + 273.15;
        answer.push_back(kelvin);
        double farenheit=celsius * 1.80 + 32.00;
        answer.push_back(farenheit);
        return answer;
    }
};