#!/usr/bin/env python
# coding: utf-8

# In[19]:



def dayofweek(d,m, y):
  t = [0, 3, 2, 5, 0, 3, 5, 1, 4, 6, 2, 4] 
  y -= m < 3
  return (( y + int(y / 4) - int(y / 100)  + int(y / 400) + t[m - 1] + d) % 7) 

year = int (input("Enter the year :"))
day = dayofweek(1, 12, year); 

if(day == 0):
  print(year ," 1 st  December is a sunday !")
else:
  print(year, " 1 st  December is not a sunday !")


# In[ ]:





# In[ ]:




