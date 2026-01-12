#include <cmath>
class Solution {
public:
    string intToRoman(int num) {
        int x = to_string(num).length()-1;
        string t = "";
        for(int i=x;i>= 0 ;i--){

            while( num != 0 ){
                cout<< num << " "  <<endl;
                if(num >= 1000){
                    num = num-1000;
                    t= t+ "M";
                }else if(num >= 900){
                    num = num-900;
                    t= t+ "CM";
                }else if(num >= 500){
                    num = num-500;
                    t= t+ "D";
                }else if(num >= 400){
                    num = num-400;
                    t= t+ "CD";
                }else if(num >= 100){
                    num = num-100;
                    t= t+ "C";
                }else if(num >= 90){
                    num = num-90;
                    t= t+ "XC";
                }
                else if(num >= 50){
                    num = num-50;
                    t= t+ "L";
                }else if(num >= 40){
                    num = num-40;
                    t= t+ "XL";
                }
                else if(num >= 10){
                    num = num-10;
                    t= t+ "X";
                }else if(num >= 9){
                    num = num-9;
                    t= t+ "IX";
                }
                else if(num >= 5){
                    num = num-5;
                    t= t+ "V";
                }else if(num >= 4){
                    num = num-4;
                    t= t+ "IV";
                }else if(num >= 1){
                    num = num-1;
                    t= t+ "I";
                }
            }
        }
        return t;
    }
};