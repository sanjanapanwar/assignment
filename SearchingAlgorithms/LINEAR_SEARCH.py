#!/usr/bin/env python
# coding: utf-8

# In[3]:


#LINEAR SEARCH ALGORITHM
def linear_search(A,n):
    l=len(A)
    p=0
    for i in range(0,l):
        if(A[i]==n):
            print("The element",n,"is present at index",i)
            p+=1
            break
    if(p==0):
        print("element is not present in the array")
       
a=[3,4,5,2,1,9,4]
linear_search(a,9)
    


# In[ ]:





# In[ ]:




