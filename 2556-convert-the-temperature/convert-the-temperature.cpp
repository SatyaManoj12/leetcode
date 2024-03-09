class Solution {
public:
    vector<double> convertTemperature(double celsius) {
        vector<double>res;
        double r1=celsius+273.15;
        res.push_back(r1);
        double r2=celsius*1.80+32.00;
        res.push_back(r2);
        return res;
    }
};