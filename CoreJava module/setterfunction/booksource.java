class Book
{
  int isbn;
  String name;
  String category;
  int price;

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



}//Book class ends here

class TestBook
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
    	}
     



}//testbook class ends here