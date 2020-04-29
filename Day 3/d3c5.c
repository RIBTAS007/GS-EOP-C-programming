/* WAP to find out grade of students when marks of 4 subjects are given
    p>=85 g=A
	p<85 and p>=70 g =B
	p<70 and p>=55 g =C
	p<55 and p>=40 g =D
	p<40            g=E  */
	
	#include<iostream.h>
	int main()
	{
		float m1,m2,m3,m4,total,per;
		char g;
		scanf("%f%f%f%f",&m1,&m2,&m3,&m4);
		total = m1+m2+m3+m4;
		per = total/4;
		if(per>=85)
			g='A';
		else if(per>=70)
			g='B';
		else if(per>=55)
			g='C';
		else if(per>=40)
			g='D';
		else
			g='E';
		
		printf("percentage is %f , grade is %c \n",per,g);
		
		return 0;
	}