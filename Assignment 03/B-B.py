cry,sad=map(int,input().split())


if (cry==sad):

  print ( int(str(cry)+ '10'),int(str(sad)+'11'))
elif (sad-cry==1):

  print( int(str(cry)+'9'),int(str(sad)+'0'))
elif (sad==1 and cry==9):
  
  print("9 10")
else:
  
  print(-1)