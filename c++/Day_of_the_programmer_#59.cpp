string dayOfProgrammer(int year) {
    unordered_map<int, string>m;
    string y = to_string(year);
    m[0] = "13.09."+y;
    m[1] = "12.09."+y;
    m[2] = "26.09."+y;
    
    if(year==1918) return m[2];
    
    if(year>=1700 && year<=1917)
    {
        if(year%4==0) return m[1];
        return m[0]; 
    }
  
    else{
      
        if(year%4 == 0 && year%100!=0) return m[1];
        if(year%400==0) return m[1];
        return m[0]; 
    }
}
