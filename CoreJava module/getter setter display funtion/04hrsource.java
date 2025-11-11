class hr
{
  int id;
  String name;
  double salary;
  double commision;

//setter functions


	void setId(int I)
   	{
     		this.id=I;
   	}
	void setName(String str)
   	{
     		this.name=str;
  	}
	void setSalary(double s)
   	{
     		this.salary=s;
   	}
	void setCommision(double c)
   	{
     		this.commision=c;
   	}

//getter functions
	
	int getId() 
	{ 
		return this.id; 
	}
	String getName()
	{
		return this.name;
	}
	double getSalary()
	{
		return this.salary;
	}

	double getCommision()
	{
		return this.commision;
	}
 
//display functions

	void display()
	{
		System.out.println("Id is " + this.id);
		System.out.println("Name is " + this.name);
		System.out.println("Salary is " + this.salary);
		System.out.println("Commision is " + this.commision);

	}

}//hr class ends here

class Test
{
 public static void main(String[]a)
	{
           hr h1;
	   h1=new hr();
	   h1.setId(1);
	   h1.setName("prathmesh");
	   h1.setSalary(50000);
	   h1.setCommision(10000);
	   
	   System.out.println("Id:" + h1.id  );
	   System.out.println("Name:" + h1.name );
	   System.out.println("salary:" + h1.salary  );
	   System.out.println("commision:" + h1.commision  );

	   hr h2;
	   h2=new hr();
	   h2.setId(2);
	   h2.setName("amol");
	   h2.setSalary(40000);
	   h2.setCommision(10000);
	   
	   System.out.println("Id:" + h2.id  );
	   System.out.println("Name:" + h2.name );
	   System.out.println("salary:" + h2.salary  );
	   System.out.println("commision:" + h2.commision  );

	if (h1.getSalary() > h2.getSalary()) 
        {
            System.out.println("h1 has more salary");
        } 
	else 
        {
            System.out.println("h2 has more salary");
        }
		h1.display();
		h2.display();
	}
      
     
}//test class ends here