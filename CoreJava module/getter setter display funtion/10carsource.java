class Car
{
  String model;
  String brand;
  String colour;
  int price;
  int feulcapacity;

//setter functions

	void setModel(String str)
   	{
     		this.model=str;
   	}
	void setBrand(String str)
   	{
     		this.brand=str;
   	}
	void setColour(String str)
   	{
     		this.colour=str;
   	}
	void setPrice(int o)
   	{
     		this.price=o;
   	}
	void setFeulcapacity(int p)
   	{
     		this.feulcapacity=p;
   	}

//getter functions

	String getModel()
	{
		return this.model;
	}
	String getBrand()
	{
		return this.brand;
	}
	String getColour()
	{
		return this.colour;
	}
	int getPrice()
	{
		return this.price;
	}
	int getFeulcapacity()
	{
		return this.feulcapacity;
	}

//display functions

	void display()
	{
		System.out.println("model is" + this.model);
		System.out.println("brand is" + this.brand);
		System.out.println("colour is" + this.colour);
		System.out.println("Price is" + this.price);
		System.out.println("feulcapacity is" + this.feulcapacity);


	}



}//car  class ends here

class Test
{
 public static void main(String[]a)
	{
           Car c1;
	   c1=new Car();
	   c1.setModel("harrier");
	   c1.setBrand("TaTa");
	   c1.setColour("black");
           c1.setPrice(5000000);
           c1.setFeulcapacity(30);
	   
	   System.out.println("model:" + c1.model );
	   System.out.println("brand:" + c1.brand );
	   System.out.println("colour:" + c1.colour);
           System.out.println("price:" + c1.price);
           System.out.println("Feulcapacity:" + c1.feulcapacity);

           Car c2;
	   c2=new Car();
	   c2.setModel("saffari");
	   c2.setBrand("TaTa");
	   c2.setColour("black");
           c2.setPrice(8000000);
           c2.setFeulcapacity(50);
	   
	   System.out.println("model:" + c2.model );
	   System.out.println("brand:" + c2.brand );
	   System.out.println("colour:" + c2.colour);
           System.out.println("price:" + c2.price);
           System.out.println("Feulcapacity:" + c2.feulcapacity);

	   if (c1.getFeulcapacity() > c2.getFeulcapacity()) 
          {
            System.out.println("c1 has more feulcapacity");
          } 
	  else 
          {
            System.out.println("c2 has more feulcapacity");
          }
		c1.display();
		c2.display();
	}
     
}//testcar class ends here