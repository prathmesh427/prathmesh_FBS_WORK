class SalesManager
{
  int id;
  String name;
  double salary;
  double incentive;
  int    target;

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




}//SalesManager class ends here

class TestSalesManager
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

    	}
     



}//testsalesmanager class ends here