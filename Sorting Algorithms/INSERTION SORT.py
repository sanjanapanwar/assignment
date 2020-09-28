#!/usr/bin/env python
# coding: utf-8

# In[2]:


#INSERTION SORT ALGORITHM
#insertion sort algorithm is not the best algorithm in terms of performance,but its a little more efficient than
#selection sort and bubble sort in practical scenarios
def Insertionsort(A):
    n=len(A)
    for i in range(0,n):
        value=A[i]
        hole=i
        while(hole>0 and A[hole-1]>value):
            A[hole]=A[hole-1]
            hole=hole-1
            A[hole]=value
a=[8,7,6,5,4,3,2,1]
Insertionsort(a)
print(a)


# In[ ]:




