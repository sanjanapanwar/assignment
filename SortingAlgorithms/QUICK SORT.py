#!/usr/bin/env python
# coding: utf-8

# In[4]:


#### QUICK SORT ALGORITHM
#a=[2,1,3,4,8,5,7,6]
def partition(A,start,end):
    pivot=A[end]
    pindex=start
    for i in range(start,end):
        if(A[i]<=pivot):
            temp=A[pindex]
            A[pindex]=A[i]
            A[i]=temp
            pindex+=1
    temp1=A[pindex]
    A[pindex]=A[end]
    A[end]=temp1
    return pindex

def Quicksort(A,start,end):
    if(start<end):
        pindex=partition(A,start,end)
        Quicksort(A,start,pindex-1)
        Quicksort(A,pindex+1,end)
        
a=[2,1,3,4,8,5,7,6]
Quicksort(a,0,len(a)-1)
print(a)
            
    
    


# In[ ]:




