class Car
{
  String model;
  String brand;
  String colour;
  int price;
  int feulcapacity;

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



}//car  class ends here

class TestCar
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

    	}
     



}//testcar class ends here