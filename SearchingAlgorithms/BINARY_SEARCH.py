#!/usr/bin/env python
# coding: utf-8

# In[2]:


#BINARY SEARCH ALGORITHM
def Binary_Search(A,x):
    n=len(A)
    start=0
    end=n-1
    while(start<=end):
        mid=(start+end)//2
        if(A[mid]==x):
            return mid
        elif(x>A[mid]):
            start=mid+1
        else:
            end=mid-1
    return -1
a=[3,5,33,55,67,89]
x=int(input("enter the element to be searched"))
print("the element is present at index",Binary_Search(a,x))


# In[ ]:





# In[ ]:




