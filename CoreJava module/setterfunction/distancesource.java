class Distance
{
  int km;
  int m;

void setKm(int k)
   {
     this.km=k;
   }
void setM(int m)
   {
     this.m=m;
   }




}//distance class ends here

class testDistance
{
 public static void main(String[]a)
	{
           Distance d1;
	   d1=new Distance();
	   d1.setKm(100);
 	   d1.setM(50);
	   	   

	   System.out.println("km:" + d1.km  );
	   System.out.println("m:" + d1.m );
	       	

    	}
     



}//testDisatance class ends here