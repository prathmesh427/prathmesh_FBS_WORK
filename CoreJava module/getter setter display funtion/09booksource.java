class Book
{
  int isbn;
  String name;
  String category;
  int price;

//setter functions

	void setIsbn(int i)
   	{
     		this.isbn=i;
   	}
	void setName(String str)
   	{
     		this.name=str;
   	}
	void setCategory(String str)
   	{
   		this.category=str;
   	}
	void setPrice(int p)
   	{
     		this.price=p;
   	}

// getter functions

	int getIsbn()
	{
		return this.isbn;
	}
	String getName()
	{
		return this.name;
	}
	String getCategory()
	{
		return this.category;
	}
	int getPrice()
	{
		return this.price;
	}

//display functions

	void display()
	{
		System.out.println("isbn no " + this.isbn);
		System.out.println("name is " + this.name);
		System.out.println("category is " + this.category);
		System.out.println("price is " + this.price);
	}

}//Book class ends here

class Test
{
 public static void main(String[]a)
	{
           Book b1;
	   b1=new Book();
	   b1.setIsbn(31);
	   b1.setName("bagwatgita");
	   b1.setCategory("religon");
           b1.setPrice(5000);
	   
	   System.out.println("isbn:" + b1.isbn );
	   System.out.println("Name:" + b1.name );
	   System.out.println("category:" + b1.category);
           System.out.println("price:" + b1.price);

           Book b2;
	   b2=new Book();
	   b2.setIsbn(21);
	   b2.setName("Ramayan");
	   b2.setCategory("religon");
           b2.setPrice(7000);
	   
	   System.out.println("isbn:" + b2.isbn );
	   System.out.println("Name:" + b2.name );
	   System.out.println("category:" + b2.category);
           System.out.println("price:" + b2.price);

	   if (b1.getPrice() > b2.getPrice()) 
          {
            System.out.println("b1 is costly");
          } 
	  else 
          {
            System.out.println("b2 is costly");
          }
		b1.display();
		b2.display();
  }
     



}//testbook class ends here