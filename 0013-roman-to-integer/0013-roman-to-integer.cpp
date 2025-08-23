class Solution {
public:
    int romanToInt(string s) {
        int i=0,length=s.length();
        int sum=0;
        while(i<=length){
            char z=s[i],y='\0';
            if(i<length-1){
                y=s[i+1];
            }
            if(z=='M'){
                sum+=1000;
            }
            else if(z=='D'){
                sum+=500;
            }
            else if(z=='C'){
                if(y=='D'){
                    sum+=400;
                    i++;
                }
                else if(y=='M'){
                    sum+=900;
                    i++;
                }
                else{
                    sum+=100;
                }
            }
            else if(z=='L'){
                sum+=50;
            }
            else if(z=='X'){
                if(y=='L'){
                    sum+=40;
                    i++;
                }
                else if(y=='C'){
                    sum+=90;
                    i++;
                }
                else{
                    sum+=10;
                }
            }
            else if(z=='V'){
                sum+=5;
            }
            else if(z=='I'){
                if(y=='V'){
                    sum+=4;
                    i++;
                }
                else if(y=='X'){
                    sum+=9;
                    i++;
                }
                else{
                    sum+=1;
                }
            }
            i++;
            
        }
        return sum;
    }
};