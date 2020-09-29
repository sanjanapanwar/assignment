#!/usr/bin/env python
# coding: utf-8

# In[26]:


#IMPLEMENTATION OF BINARY SEARCH USING RECURSION
def Binary_search(A,start,end,x):
    if(start>end):
        return -1
    mid=start+(end-start)//2  #to avoid integer value limit
    if(x==A[mid]):
        return mid
    elif(x<A[mid]):
        return Binary_search(A,start,mid-1,x)
    else:
        return Binary_search(A,mid+1,end,x)
a=[3,5,7,9,10,13,34,35]
x=int(input("ENTER THE VALUE OF ELEMENT TO BE SEARCHED:"))
n=len(a)
index=Binary_search(a,0,n-1,x)
if(index==-1):
    print("the element is not present in the array")
else:
    print("the element is present at",index)


# In[ ]:





# In[ ]:




