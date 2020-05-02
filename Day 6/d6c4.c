int x,y;   // assume x and y are stored contiguously in memory
x=10;
y= 12;
int *ptr = &x;

x =*ptr++;   // x same and ptr changes

x = *++ptr;   // x and ptr both changes

x =(*ptr)++;  //ptr is same and x changes

x=++*ptr;      // x changes ptr is same.