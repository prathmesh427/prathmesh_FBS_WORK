class Product
{
  int id;
  String name;
  int price;
  int quantity;

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



}//product class ends here

class TestProduct
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
    	}
     



}//testproduct class ends here