class Student
{
  int roll;
  String name;
  int mark;

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



}//student class ends here

class TestStudent
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
    	}
     



}//teststudent class ends here