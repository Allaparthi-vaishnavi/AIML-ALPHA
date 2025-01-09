#!/usr/bin/env python
# coding: utf-8

# In[1]:


##Lambda Functions :- One line functions


# In[2]:


greet = lambda name : print(f"Good Morning {name}!")
greet("Vaishnavi")


# In[ ]:


product = lambda a,b,c : a*b*c
product(2,3,6)


# In[ ]:


##Lambda functions with list comprehension
even = lambda L : [x for x in L if x%2 == 0]
my_list = [100,3,6,18,36,90,27]
even(my_list)


# In[ ]:


odd = lambda L : [x for x in L if x%3 == 0]
my_list=[89,27,36,18,2,4,78]
odd(my_list)


# In[ ]:




