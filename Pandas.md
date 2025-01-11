#  Create pandas series


```python
import pandas as pd
```


```python
#Create pandas series using list

data=[10,20,30,40]
series=pd.Series(data)
print(series)
```

    0    10
    1    20
    2    30
    3    40
    dtype: int64
    


```python
#Create series using a custom index
#pandas series objects are size-immutable. But it allows to modifyf alement values.
data=[1,2,3,4]
i=['A','B','C','D']
series=pd.Series(data, index=i)
print(series)
```

    A    1
    B    2
    C    3
    D    4
    dtype: int64
    


```python
#create a pandas series using dictionary
data={'a':10, 'b':20, 'c':30}
series=pd.Series(data)
print(series)
```

    a    10
    b    20
    c    30
    dtype: int64
    


```python
series.replace(20, 40)
```




    a    10
    b    40
    c    30
    dtype: int64




```python
#Create series using numpy array
import numpy as np

data=np.array([100,200,300])
series=pd.Series(data, index=['a', 'b', 'c'])
print(series)
```

    a    100
    b    200
    c    300
    dtype: int32
    

# Pandas dataframe


```python
#create pandas dataframe from dictionary of lists
import pandas as pd

data={'Name':['Alice','Bod','Mary'], 'Age':[25,30,34], 'Country':["USA","UK","AUS"]}
df=pd.DataFrame(data)
print(df)
```

        Name  Age Country
    0  Alice   25     USA
    1    Bod   30      UK
    2   Mary   34     AUS
    


```python
#Create pandas dataframe from numpy array
import numpy as np

array=np.array([[1,2,3], [4,5,6], [7,8,9]])
print(array)
df=pd.DataFrame(array, columns=['A','B','C'])
print(df)
```

    [[1 2 3]
     [4 5 6]
     [7 8 9]]
       A  B  C
    0  1  2  3
    1  4  5  6
    2  7  8  9
    


```python
import numpy as np

array=np.array([[1,2,3], [4,5,6], [7,8,9]])
print(array)
df=pd.DataFrame(array)
print(df)
```

    [[1 2 3]
     [4 5 6]
     [7 8 9]]
       0  1  2
    0  1  2  3
    1  4  5  6
    2  7  8  9
    


```python

```
