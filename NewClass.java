import java.util.*;

public class NewClass8 {
      public static void main(String args[])
    {
     
     char temp;
     int output1,z;
      String str,x="";
        Scanner in=new Scanner(System.in);
    str=in.nextLine();
    char array[]=str.toCharArray();
      for(int y=0;y<str.length();y++)
       {
           for(int r=y+1;r<str.length();r++)
           {
      
              if(array[y]>array[r])
              {
                  temp=array[y];
                  array[y]=array[r];
                  array[r]=temp;
              }
              }
       }
  for(int k=0;k<str.length();k++) {
   
  x=x+array[k]+"";
  }
   output1=Integer.parseInt(x);
  z=output1/1000;
  System.out.print(z);
    }}
    
