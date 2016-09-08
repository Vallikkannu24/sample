import java.util.*;
public class seven {
    public static void main(String[] args)
    {
        int n;
      
        Scanner in=new Scanner(System.in);
        n=in.nextInt();
        check(n);
                
          System.out.println(count);  
         
    }
       static int count=0;
       public static void check(int num){
           int temp,checknum=7;
         
        if(num>0)
        {
          temp=num%10;  
          if(temp==checknum)
          {
              count++;
          }
        
        num=num/10;
          check(num);}
       
        }
