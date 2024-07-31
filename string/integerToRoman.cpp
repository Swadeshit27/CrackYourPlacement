class Solution {
public:
    
    string intToRoman(int nums) {
       
        string ones[10]={"","I","II","III","IV","V","VI","VII","VIII","IX"};
        string tens[10]={"","X","XX","XXX","XL","L","LX","LXX","LXXX","XC"};
        string hun[10]={"","C","CC","CCC","CD","D","DC","DCC","DCCC","CM"};
        string thou[4]={"","M","MM","MMM"};
        return thou[nums/1000]+hun[(nums%1000)/100]+tens[(nums%100)/10]+ones[(nums%10)/1];
    }
};