/* 6. Plus One
Given a non-empty array of digits representing a non-negative integer, plus one to the integer.
The digits are stored such that the most significant digit is at the head of the list, and each element in the array contain a single digit.
You may assume the integer does not contain any leading zero, except the number 0 itself.*/


 vector<int> plusOne(vector<int>& digits) {
        int carry=1;
        for(int i=digits.size()-1;i>=0;i--){
            int num=digits[i]+carry;
            digits[i]=num%10;
            carry=num/10;
        }
        if(carry>0)
            digits.insert(digits.begin(),carry);
        return digits;
}