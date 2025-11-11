class Complex
{
	int real;
 	String imaginary;

//setter functions

	void setReal (int i)
	{
	this.real=i;
	}
	void setImaginary (String p)
	{
	 this.imaginary=p;
	}

//getter functions

	int getReal()
	{
		return this.real;
	}
	String getImaginary()
	{
		return this.imaginary;
	}

//display functions

	void display()
	{
		System.out.println("real no is " + this.real);
		System.out.println("imaginary no is " + this.imaginary);

	}



}//complex class ends here

class Test
{

	public static void main(String []a)
	{

	Complex c1; 
	c1=new Complex();

	c1.setReal(5);
        c1.setImaginary("21");

	System.out.println("ComplexNo=" + c1.real+ c1.imaginary);
	
	Complex c2; 
	c2=new Complex();

	c2.setReal(9);
        c2.setImaginary("31");

	System.out.println("ComplexNo=" + c2.real+ c2.imaginary);

	if (c1.getReal() > c2.getReal() ) 
          {
            System.out.println("c1 no is gretter");
          } 
	  else 
          {
            System.out.println("c2 no is gretter");
          }
		c1.display();
		c2.display();
	}

}//Test complex class ends here