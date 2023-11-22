#include <iostream>
using namespace std;
#include <cmath>

class POLYNOMIAL
{
struct poly
{
	float coeff;
	int exp;
	
};
    int i;
	int deg1;
	int deg2;
	int k=0, l=0, m=0;

struct poly a[50],b[50],c[50],d[50];

public:
	poly1()
	{ 
	  cout<<"Enter degree of first polynomial: ";
 	  cin>> deg1;
 	  
 	  for(i=0;i<=deg1;i++)
 	   { cout<<"Enter coefficient of x^"<<i<<": ";
 	     cin>>a[i].coeff ;
 	     a[k++].exp= i;
	   }
	 
	}
	print_poly1()
	{cout<<"\nFirst Polynomial = \n"<<a[0].coeff;
     for(i=1;i<=deg1;i++)
   {
      cout<<"+"<<a[i].coeff<<"x^"<<a[i].exp;
   } 
	}
	poly2()
	{ cout<<"Enter degree of second polynomial: ";
 	  cin>> deg2;
 	  
 	  for(i=0;i<=deg2;i++)
 	   { cout<<"Enter coefficient of x^"<<i<<": ";
 	     cin>>b[i].coeff ;
 	     b[l++].exp= i;
	   }
	 
	}
	print_poly2()
	{cout<<"\nSecond Polynomial = \n"<<b[0].coeff;
     for(i=1;i<=deg2;i++)
   {
      cout<<"+"<<b[i].coeff<<"x^"<<b[i].exp;
   } 
	}
	add_poly()
	{if(deg1>deg2)
	 {for(i=0;i<=deg2;i++)
	  {c[m].coeff=a[i].coeff + b[i].coeff;
	   c[m].exp=a[i].exp;
	   m++;
	  }
	  for(i=deg2+1;i<=deg1;i++)
	  {c[m].coeff=a[i].coeff;
	  c[m].exp=a[i].exp;
	  }
}

	  else
	  {for(i=0;i<=deg1;i++)
	  {c[m].coeff=a[i].coeff + b[i].coeff;
	   c[m].exp=b[i].exp;
	   m++;
	  }
	  for(i=deg1+1;i<=deg2;i++)
	  {c[m].coeff=b[i].coeff;
	  c[m].exp=b[i].exp;
	  }
	 }
	
}

print_polysum()
{cout<<"The sum of the two polynomials entered is \n"<<c[0].coeff;
for(i=1;i<m;i++)
{cout<<"+ "<<c[i].coeff<<"x^"<<c[i].exp;
}
}
};

int main()
{POLYNOMIAL p;
cout<<"input first polynomial\n";
p.poly1();
p.print_poly1();
cout<<"\ninput second polynomial\n";
p.poly2();
p.print_poly2();
cout<<"\n";
p.add_poly();
p.print_polysum();
return 0;
};
