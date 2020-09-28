#!/usr/bin/env python
# coding: utf-8

# In[17]:


#MERGE SORT ALGORITHM
#Merge function
def Merge(L,R,A):
    nL=len(L)
    nR=len(R)
    i=0
    j=0
    k=0
    while(i<nL and j<nR):
        if(L[i]<R[j]):
            A[k]=L[i]
            i=i+1
        else:
            A[k]=R[j]
            j=j+1
        k=k+1
    while(i<nL):
        A[k]=L[i]
        i=i+1
        k=k+1
    while(j<nR):
        A[k]=R[j]
        j=j+1
        k=k+1

#merge sort function     
def Mergesort(A):
    n=len(A)
    if(n<2):
        return
    mid=n//2
    left=[0]*(mid)
    right=[0]*(n-mid)
    for i in range(0,mid):
        left[i]=A[i]
    for i in range(mid,n):
        right[i-mid]=A[i]

    Mergesort(left)
    Mergesort(right)
    Merge(left,right,A)

print("Unsorted array:")
a=[8,7,6,5,4,3,2,1]
print(a)
Mergesort(a)
print("Sorted array:")
print(a)

        
    


# In[ ]:




