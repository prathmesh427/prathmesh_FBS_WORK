class employee
{
  int id;
  String name;
  double salary;

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



}//employee class ends here

class testemployee
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
    	}
     



}//testemployee class ends here