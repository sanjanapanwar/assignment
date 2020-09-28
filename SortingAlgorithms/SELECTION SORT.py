#!/usr/bin/env python
# coding: utf-8

# In[2]:


#SELECTION SORT ALGORITHM
def SelectionSort(A):
    n=len(A)
    for i in range(0,n-1):
        iMin=i
        for j in range(i+1,n):
            if(A[j]<A[iMin]):
                iMin=j
        temp=A[i]
        A[i]=A[iMin]
        A[iMin]=temp
a=[8,7,6,5,4,3,2,1]
SelectionSort(a)
print(a)
                


# In[ ]:




