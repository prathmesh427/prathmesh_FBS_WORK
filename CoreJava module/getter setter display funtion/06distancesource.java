class Distance
{
  int km;
  int m;

//setter functions

	void setKm(int k)
   	{
     		this.km=k;
   	}
	void setM(int m)
   	{
     		this.m=m;
   	}
// getter functions

	int getKm()
	{
		return this.km;
	}
	int getM()
	{
		return this.m;
	}
// display functions
	void display()
	{
 		System.out.println("km is" + this.km);
 		System.out.println("m is" + this.m);

	}

}//distance class ends here

class Test
{
 public static void main(String[]a)
	{
           Distance d1;
	   d1=new Distance();
	   d1.setKm(100);
 	   d1.setM(50);
	   	   

	   System.out.println("km:" + d1.km  );
	   System.out.println("m:" + d1.m );

	 Distance d2;
	   d2=new Distance();
	   d2.setKm(1000);
 	   d2.setM(500);
	   	   
	   System.out.println("km:" + d2.km  );
	   System.out.println("m:" + d2.m );

	if (d1.getKm() > d2.getKm()) 
        {
            System.out.println("d1 is longer");
        } 
	else 
        {
            System.out.println("d2 is longer");
        }
		d1.display();
		d2.display();


	       	
	}
     



}//test class ends here