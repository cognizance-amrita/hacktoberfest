def bonAppetit(orders , paid , didnt_eat):
    total_bill=sum(list(map(int, orders)))
    if(paid==((total_bill-int(orders[didnt_eat]))/2)):
        print("bonAppetit")
    else:
        print(int(paid-((total_bill-int(orders[didnt_eat]))/2)))        

l=input().split()
k=int(l[1])
l=input().split()
pay=int(input())
bonAppetit(l , pay , k)

