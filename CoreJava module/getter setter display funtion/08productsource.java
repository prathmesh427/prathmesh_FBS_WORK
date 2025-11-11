class Product
{
  int id;
  String name;
  int price;
  int quantity;

//setter functions

	void setId(int i)
   	{
     		this.id=i;
   	}
	void setName(String str)
   	{
     		this.name=str;
   	}
	void setPrice(int p)
   	{
    		this.price=p;
   	}
	void setQuantity(int q)
   	{
     		this.quantity=q;
   	}
//getter funtions

	int getId()
	{
		return this.id;
	}
	String getName()
	{
		return this.name;
	}
	int getPrice()
	{
		return this.price;
	}
	int getQuantity()
	{
		return this.price;
	}

//display functions


	void display()
	{
		System.out.println("id is" + this.id);
		System.out.println("name is" + this.name);
		System.out.println("price is" + this.price);
		System.out.println("quantity is" + this.quantity);
	}



}//product class ends here

class Test
{
 public static void main(String[]a)
	{
           Product p1;
	   p1=new Product();
	   p1.setId(31);
	   p1.setName("laptop");
	   p1.setPrice(80000);
           p1.setQuantity(5000);
	   
	   System.out.println("id:" + p1.id );
	   System.out.println("Name:" + p1.name );
	   System.out.println("price:" + p1.price );
           System.out.println("quantity:" + p1.quantity );

	   Product p2;
	   p2=new Product();
	   p2.setId(33);
	   p2.setName("computer");
	   p2.setPrice(8000);
           p2.setQuantity(5000);
	   
	   System.out.println("id:" + p2.id );
	   System.out.println("Name:" + p2.name );
	   System.out.println("price:" + p2.price );
           System.out.println("quantity:" + p2.quantity );


	  if (p1.getPrice() > p2.getPrice()) 
          {
            System.out.println("p1 is costly");
          } 
	  else 
          {
            System.out.println("p2 is costly");
          }
		p1.display();
		p2.display();


    	}
     



}//testproduct class ends here