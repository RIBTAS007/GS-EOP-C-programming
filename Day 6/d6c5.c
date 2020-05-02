&a[0]=2000
&a[1]=2002
&a[2]=2004
&a[3]=2006
&a[4]=2008

a = constant pointer to the first element = &a[0] = 2000
a+1 = constant pointer to the second element = &a[0] + 1*sizeof(int) = 2000 + 2 =2002
a+2 = constant pointer to the third element = &a[0] + 2*sizeof(int) = 2000 + 4 =2004
a+3 = constant pointer to the fourth element = &a[0] + 3*sizeof(int) = 2000 + 6 =2006
a+4 = constant pointer to the fifth element = &a[0] + 4*sizeof(int) = 2000 + 8 =2008

*a = *2000 = 1
*(a+1)=*(2002)=2
*(a+2)=*(2004)=3
*(a+3)=*(2006)=4
*(a+4)=*(2008)=5