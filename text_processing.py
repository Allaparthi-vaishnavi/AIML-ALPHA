#!/usr/bin/env python
# coding: utf-8

# In[17]:


def remove_punc(input_text):
    punc_marks=['.', ',', '"', '{', '}', ':', ';', '-', '?', '[', ']', '!', '&', '*', '(', ')',  '#', '%', '~']
    
    output_text = ""
    for char in input_text:
        if char not in punc_marks:
            output_text += char
    return output_text


# In[16]:


def remove_stopmarks(input_text):
    stopmarks = ['about', 'above', 'after', 'again', 'against', 'all', 'am', 'an', 'and', 'any', 'are', 'aren’t', 'as', 'at','be', 'because', 'and']
    word = input_text.split()
    
    filtered_words = []
    for word in words:
        if word.lower() not in stop_marks:
            filtered_words.append(word)
            
    output_text = ' '.join(filtered_words)
    return(output_text);


# In[ ]:





# In[ ]:




