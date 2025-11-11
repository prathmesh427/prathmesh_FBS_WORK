class employee
{
  int id;
  String name;
  double salary;

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
 
//display functions

	void display()
	{
		System.out.println("Id is " + this.id);
		System.out.println("Name is " + this.name);
		System.out.println("Salary is " + this.salary);
	}

}//employee class ends here

class Test
{
 public static void main(String[]a)
  {
           employee e1;
	   e1=new employee();
	   e1.setId(31);
	   e1.setName("prathmesh");
	   e1.setSalary(50000);
	   
	   System.out.println("Id:" + e1.id  );
	   System.out.println("Name:" + e1.name );
	   System.out.println("Id:" + e1.salary  );

	  employee e2;
	   e2=new employee();
	   e2.setId(21);
	   e2.setName("swastit");
	   e2.setSalary(500000);
	   
	   System.out.println("Id:" + e2.id  );
	   System.out.println("Name:" + e2.name );
	   System.out.println("Id:" + e2.salary  );

	if (e1.getSalary() > e2.getSalary()) 
        {
            System.out.println("e1 has more salary");
        } 
	else 
        {
            System.out.println("e2 has more salary");
        }
		e1.display();
		e2.display();

 }
     
}//Test class ends here