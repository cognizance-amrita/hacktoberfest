def month_int(m):
    if(m=="Jan"):
        return 1 
    elif(m=="Feb"):
        return 2
    elif(m=="Mar"):
        return 3
    elif(m=="Apr"):
        return 4
    elif(m=="May"):
        return 5
    elif(m=="Jun"):
        return 6
    elif(m=="Jul"):
        return 7
    elif(m=="Aug"):
        return 8
    elif(m=="Sep"):
        return 8
    elif(m=="Oct"):
        return 10
    elif(m=="Nov"):
        return 11
    elif(m=="Dec"):
        return 12
    
def days_in_month(m1):
    days = [ 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 ]
    val_m1=month_int(m1)
    return days[val_m1-1]
        
def calc(a,b):
    t1=a.split()
    t2=b.split()
    
    if(t1[2]!=t2[2]):
        d=t1[1]-days_in_month(t1[2])+t2[1]
    else:
        d=int(t1[1])-int(t2[1])

    y=int(t1[3])-int(t1[3])
    time1=t1[4].split(':')
    time2=t2[4].split(':')
    hourd=int(time1[0])-int(time2[0])
    mind=int(time1[1])-int(time2[1])
    secd=int(time1[2])-int(time2[2])
    
    if(t1[5][0]!=t2[5][0]):
        hourd=hourd-(int(t1[5][1:3])+int(t2[5][1:3]))
        mind=mind-(int(t1[5][3:])+int(t2[5][3:]))    
    else:
        hourd=hourd+(int(t1[5][1:3])-int(t2[5][1:3]))
        mind=mind+(int(t1[5][3:])-int(t2[5][3:]))
        
    f_sec=d*86400+y*365*86400
    f_sec=f_sec+hourd*3600+mind*60+secd
    return f_sec

n=int(input())
while(n):
    n=n-1
    t1=input()
    t2=input()
    print(calc(t1,t2))
