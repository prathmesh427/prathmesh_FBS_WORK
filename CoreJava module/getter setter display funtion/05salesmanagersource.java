class SalesManager
{
  int id;
  String name;
  double salary;
  double incentive;
  int    target;

//setter functions

	void setId(int p)
   	{
     		this.id=p;
   	}
	void setName(String str)
   	{
     		this.name=str;
   	}
	void setSalary(double s)
   	{
     		this.salary=s;
   	}
	void setIncentive(double i)
   	{
     		this.incentive=i;
   	}
	void setTarget(int t)
   	{
     		this.target=t;
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
	double getIncentive()
	{
		return this.incentive;
	}
	double getTarget()
	{
		return this.target;
	}

 
//display functions

	void display()
	{
		System.out.println("Id is " + this.id);
		System.out.println("Name is " + this.name);
		System.out.println("Salary is " + this.salary);
		System.out.println("Incentive is " + this.incentive);
		System.out.println("Target is " + this.target);
	}

}//SalesManager class ends here

class Test
{
 public static void main(String[]a)
{
           SalesManager s1;
	   s1=new SalesManager();
	   s1.setId(1);
	   s1.setName("prathmesh");
	   s1.setSalary(50000);
	   s1.setIncentive(1000);
           s1.setTarget(20);
	   
	   System.out.println("Id:" + s1.id  );
	   System.out.println("Name:" + s1.name );
	   System.out.println("salary:" + s1.salary  );
	   System.out.println("incentive:" + s1.incentive  );
           System.out.println("target:" + s1.target );  
	 
	  SalesManager s2;
	   s2=new SalesManager();
	   s2.setId(2);
	   s2.setName("Swastik");
	   s2.setSalary(40000);
	   s2.setIncentive(1000);
           s2.setTarget(20);
	   
	   System.out.println("Id:" + s2.id  );
	   System.out.println("Name:" + s2.name );
	   System.out.println("salary:" + s2.salary  );
	   System.out.println("incentive:" + s2.incentive  );
           System.out.println("target:" + s2.target );    

	if (s1.getSalary() > s2.getSalary()) 
        {
            System.out.println("s1 has more salary");
        } 
	else 
        {
            System.out.println("s2 has more salary");
        }
		s1.display();
		s2.display();
	
  	

}
	
}//test class ends here