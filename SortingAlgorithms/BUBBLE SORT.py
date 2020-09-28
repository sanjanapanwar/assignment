
#BUBBLE SORT ALGORITHM
def Bubble_sort(Array):
    n=len(Array)
    flag=0
    for j in range(0,n-1):
        for i in range(0,n-1):
            if(Array[i]>Array[i+1]):
                temp=Array[i+1]
                Array[i+1]=Array[i]
                Array[i]=temp
                flag+=1
        if(flag==0):
            break
    return Array
                
Array=[3,5,2,8,4,1,0]
print(Bubble_sort(Array))
    




