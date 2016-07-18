
public class Test1 
{
 public static void main(String[] args) 
 {
  int n;
  int a=args.length;
  if(a==0)
  {
	  System.out.println("an integer as argument is expected");
  }
  else
  { 
	  n=Integer.parseInt(args[0]);
  if(n==0)
  {
	  System.out.println(n+ " is niether positive nor negative");
  }
  else if(n>0)
  {
	  System.out.println(n+ " is a positive integer");
  }
  else 
  {
	  System.out.println(n+ " is a negative integer");
  }
 }
}
}
