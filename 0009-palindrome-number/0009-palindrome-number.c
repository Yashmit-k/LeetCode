bool isPalindrome(int x) {
    long long y=x,rev_num = 0;
    if(x>=0){
    while (y > 0) { 
        rev_num = rev_num * 10 + y % 10; 
        y = y / 10; 
    } 
        if(x==rev_num){
            return true;
        }
        else{
            return false;
        }
    }
    else{
        return false;
    }
    
}