#!/usr/bin/env python
# coding: utf-8

# In[8]:


punc_marks=['.', ',', '"', '{', '}', ':', ';', '-', '?', '[', ']', '!', '&', '*', '(', ')',  '#', '%', '~']

input_text="""Wildfires are ripping across parts of Los Angeles, leading to at least 11 deaths, burning down hundreds of buildings, and prompting evacuation orders for tens of thousands across the county.\

{Despite the efforts of thousands of firefighters, the biggoest blazes remain mostly uncontained}:.

Weather conditions and the underlying impact of "climate change are expected to continue fanning the flames for days to come", and there is intense scrutiny of officials' preparedness for the disaster.

Authorities say they expect the death toll will increase.

"""
    
for i in punc_marks:
            input_text=input_text.replace(i, '')
print(input_text)


# In[ ]:




