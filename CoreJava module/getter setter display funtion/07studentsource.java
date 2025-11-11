class Student
{
  int roll;
  String name;
  int mark;

//setter functions

	void setRoll(int r)
   	{
    		this.roll=r;
   	}
	void setName(String str)
   	{
     		this.name=str;
   	}
	void setMark(int m)
   	{
     		this.mark=m;
   	}

//getter functions

	int getRoll()
	{
		return this.roll;
	}
	String getName()
	{
		return this.name;
	}
	int getMark()
	{
		return this.mark;
	}

//display functions

	void display()
	{
		System.out.println("roll no is" + this.roll);
		System.out.println("name is" + this.name);
		System.out.println("mark is" + this.mark);
		
	}


}//student class ends here

class Test
{
 public static void main(String[]a)
	{
           Student s1;
	   s1=new Student();
	   s1.setRoll(31);
	   s1.setName("prathmesh");
	   s1.setMark(80);
	   
	   System.out.println("rollno:" + s1.roll );
	   System.out.println("Name:" + s1.name );
	   System.out.println("mark:" + s1.mark );

	    Student s2;
	   s2=new Student();
	   s2.setRoll(21);
	   s2.setName("swastik");
	   s2.setMark(70);
	   
	   System.out.println("rollno:" + s2.roll );
	   System.out.println("Name:" + s2.name );
	   System.out.println("mark:" + s2.mark );

	if (s1.getMark() > s2.getMark()) 
        {
            System.out.println("s1 has more mark");
        } 
	else 
        {
            System.out.println("s2 has more mark");
        }
		s1.display();
		s2.display();


	       	
   }

}//teststudent class ends here