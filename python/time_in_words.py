def timeInWords(h, m):

    t=["zero", "one", "two", "three", "four", "five",
       "six", "seven", "eight", "nine", "ten", "eleven",
       "twelve", "thirteen", "fourteen", "fifteen",
       "sixteen", "seventeen", "eighteen", "nineteen",
       "twenty", "twenty one", "twenty two", "twenty three",
       "twenty four", "twenty five" ,"twenty six",
       "twenty seven", "twenty eight"," twenty nine"]    
    
    if(m==0):
        print(t[h],"o' clock")
    elif(m==15):
        print("quarter past",t[h])
    elif(m>=1 and m<=30 and m!=15):
        print(t[m],"minutes past",t[h])
    elif(m==45):
        print("quarter to",t[(h%12)+1])
    elif(m>30 and m<60 and m!=45):
        print(t[60-m],"minutes to",t[(h%12)+1])

hour=int(input("enter hours: "))
minutes=int(input("enter minutes: "))

timeInWords(hour,minutes)
