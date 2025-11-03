class Complex
{
	String real, imaginary;

	void setReal (String i)
	

	{
	this.real=i;
	}

	void setImaginary (String p)

	{
	 this.imaginary=p;

	}
}//complex class ends here

class TestComplex
{

	public static void main(String []a)
	{

	Complex c1; 
	c1=new Complex();

	c1.setReal("5+");
        c1.setImaginary("21");

	System.out.println("ComplexNo=" + c1.real+ c1.imaginary);

	}

}//Test complex class ends here