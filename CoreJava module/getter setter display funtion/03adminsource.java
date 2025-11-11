class admin
{
  int id;
  String name;
  double salary;
  double allowence;

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
	void setAllowence(double a)
   	{
     		this.allowence=a;
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

	double getAllowence()
	{
		return this.allowence;
	}
 
//display functions

	void display()
	{
		System.out.println("Id is " + this.id);
		System.out.println("Name is " + this.name);
		System.out.println("Salary is " + this.salary);
		System.out.println("Allowence is " + this.allowence);

	}


}//admin class ends here

class Test
{
 public static void main(String[]a)
	{
           admin a1;
	   a1=new admin();
	   a1.setId(1);
	   a1.setName("prathmesh");
	   a1.setSalary(50000);
	   a1.setAllowence(10000);
	   
	   System.out.println("Id:" + a1.id  );
	   System.out.println("Name:" + a1.name );
	   System.out.println("salary:" + a1.salary  );
	   System.out.println("allowence:" + a1.allowence  );


	  admin a2;
	   a2=new admin();
	   a2.setId(2);
	   a2.setName("Swastik");
	   a2.setSalary(60000);
	   a2.setAllowence(10000);
	   
	   System.out.println("Id:" + a2.id  );
	   System.out.println("Name:" + a2.name );
	   System.out.println("salary:" + a2.salary  );
	   System.out.println("allowence:" + a2.allowence  );

	if (a1.getSalary() > a2.getSalary()) 
        {
            System.out.println("a1 has more salary");
        } 
	else 
        {
            System.out.println("a2 has more salary");
        }
		a1.display();
		a2.display();
	}
     
}//Test class ends here