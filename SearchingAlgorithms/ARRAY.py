#!/usr/bin/env python
# coding: utf-8

# In[14]:


#QUESTION 1:-
#CONSIDER A 2-D ARRAY WHICH IS ROW WISE AND COLUMN-WISE SORTED AS SHOWN BELOW.WHAT IS THE TIME COMPLEXITY
#OF THE BEST POSSIBLE ALGORITHM TO FIND AN ELEMENT IN THIS ARRAY?

def Search(A,i,j,x):
    n=len(A)
    if(i<0 or j<0 or i>=n or j>=n):
        return -1
    if(x==A[i][j]):
        return i,j
    elif(x<A[i][j]):
        return Search(A,i-1,j,x)
    else:
        return Search(A,i,j+1,x)
A=[[1,4,8,12],[2,6,15,18],[7,10,16,29],[17,32,39,43]]
n=len(A)
x=int(input("Enter the element to be searched:"))
index=Search(A,n-1,0,x)
if(index==-1):
    print("the element is not present in the array!!!")
else:
    print("the element is present at",index)
    
    
    
    
    
#HERE IN THIS CASE THE BEST TIME COMPLEXITY IS O(m+n) WHERE ARRAY IS OF SIZE m*n


# In[15]:


#QUESTION 2:-
#GIVEN AN ARRAY OF n ELEMENTS.ROTATE THE ARRAY TOWARDS LEFT BY 1 POSITION?

def Left_Rotate(A,n):
    temp=A[0]
    for i in range(0,n-1):
        A[i]=A[i+1]
    A[n-1]=temp
    return A

A=[2,5,1,8,4,9]
n=len(A)
print("Array after left rotation:",Left_Rotate(A,n))


# In[18]:


#QUESTION 3:-
#GIVEN AN ARRAY OF n ELEMENTS.ROTATE THE ARRAY TOWARDS RIGHT BY 1 POSITION?

def Right_Rotate(A,n):
    temp=A[n-1]
    for i in range(n-1,0,-1):
        A[i]=A[i-1]
    A[0]=temp
    return A
A=[2,5,1,8,4,9]
n=len(A)
print("Array after right rotation:",Right_Rotate(A,n))


# In[1]:


#QUESTION 4:-
#LEFT ROTATE AN ARRAY k TIMES.
def Left_Rotate(A,n):
    j=0
    k=int(input("Enter the value of k"))
    while(j<k):
        temp=A[0]
        for i in range(0,n-1):
            A[i]=A[i+1]
        A[n-1]=temp
        j=j+1
    return A

A=[2,5,1,8,4,9]
n=len(A)
print("Array after left rotation:",Left_Rotate(A,n))


# In[2]:


#QUESTION 5:-
#RIGHT ROTATE AN ARRAY K TIMES.

def Right_Rotate(A,n):
    k=int(input("Enter the value of k:"))
    j=0
    while(j<k):
        temp=A[n-1]
        for i in range(n-1,0,-1):
            A[i]=A[i-1]
        A[0]=temp
        j=j+1
    return A
A=[2,5,1,8,4,9]
n=len(A)
print("Array after right rotation:",Right_Rotate(A,n))


# In[3]:


#QUESTION 6:-
#FIND INTERSECTION OF TWO ARRAYS.
def intersection(A,B):
    n=len(A)
    m=len(B)
    inter=[]
    for i in range(0,n):
        for j in range(0,m):
            if(A[i]==B[j]):
                inter.append(A[i])
    return inter
A=[2,4,6,8]
B=[8]
print("intersection of two array:",intersection(A,B))


# In[10]:


#QUESTION 7:-
#FIND UNION OF TWO ARRAYS.
def union(A,B):
    n=len(A)
    m=len(B)
    inter=[]
    for i in range(0,n):
        for j in range(0,m):
            if(A[i]==B[j]):
                inter.append(A[i])
    Union=A+B
    p=len(Union)
    for k in inter:
        Union.remove(k)
        
    return Union
A=[2,4,6,8]
B=[2,4,6,8,10]
print("Union of two array:",union(A,B))


# In[12]:


#QUESTION 8:-
#GIVEN AN ARRAY A WITH n INTEGERS IN ARBITARARY ORDER. GIVEN A ELEMENT X AND A VALUE SUM,WE NEED TO FIND  ALL SUCH
#ELEMENTS A[i] IN THE ARRAY SUCH THAT A[i]+x=SUM

def search(A,sum_value,x):
    p=sum_value-x
    ele=[]
    n=len(A)
    for i in range(0,n):
        if(A[i]==p):
            ele.append(A[i])
    return ele
A=[2,5,3,1,8,7,5,4,3,2]
sum_value=8
x=3
print("Elements satisfying the condition:",search(A,sum_value,x))


# In[16]:


#QUESTION 9:-
#GIVEN AN ARRAY OF SIZE n ,FIND ALL PAIRS OF ELEMENTS A[i],A[j] IN ARRAY IN SUCH A WAY THAT ADDITION OF A[i],A[j]
#IS EQUAL TO A GIVEN VALUE SUM.
def array(A,sum1):
    n=len(A)
    pair=[]
    for i in range(0,n):
        for j in range(i+1,n):
            if(A[i]+A[j]==sum1):
                q=[]
                q.append(i)
                q.append(j)
                pair.append(q)
                
    return pair
A=[2,3,6,4,1,8,5,4,2,1]
sum1=9
print("pair of elements having sum equal to sum1:",array(A,sum1))
                


# In[17]:


#QUESTION 10:-
#FIND THE TRANSPOSE OF AN n*n MATRIX STORED IN 2-D ARRAY.

def Transpose(A):
    n=len(A)
    for i in range(0,n):
        for j in range(i,n):
            temp=A[i][j]
            A[i][j]=A[j][i]
            A[j][i]=temp
            
    return A
A=[[1,2,3,4],[5,6,7,8],[9,10,11,12],[13,14,15,16]]
print("ARRAY AFTER TRANSPOSE:",Transpose(A))


# In[ ]:




