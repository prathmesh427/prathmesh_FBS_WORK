class hr
{
  int id;
  String name;
  double salary;
  double commision;

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




}//hr class ends here

class testhr
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
    	

    	}
     



}//testhr class ends here