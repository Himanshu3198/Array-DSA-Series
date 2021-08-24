// Complex Number Multiplication
class Solution {
public:
    pair<int, int> split(string str) {
        int i = str.find('+');
        double real = stoi(str.substr(0, i));
        double imaginary = stoi(str.substr(i+1, str.size()-i-2));
        pair<int, int> result(real, imaginary);
        return result;
    }
    
    string complexNumberMultiply(string num1, string num2) {
        pair<int, int> a = split(num1), b = split(num2);
        int real_a = a.first, imag_a = a.second;
        int real_b = b.first, imag_b = b.second;
        
        return to_string(real_a * real_b - imag_a * imag_b) + '+' + to_string(real_a * imag_b  + real_b * imag_a)+'i' ;
    }
};
