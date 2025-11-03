class admin
{
  int id;
  String name;
  double salary;
  double allowence;

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




}//admin class ends here

class testadmin
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
    	

    	}
     



}//testadmin class ends here