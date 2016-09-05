import java.util.*;/*

public class NewClass5 {
    public static void main(String args[])
    {
        String s;
        Scanner in=new Scanner(System.in);
        s=in.nextLine();
        String a[]=s.split(" ");
        int len=a.length;
       
        for(int i=0;i<len;i++)
        {   
            a[i]=a[i].substring(0,1).toUpperCase()+a[i].substring(1);
            
        }
        for(int j=0;j<len;j++)
        {
            System.out.print(a[j]+" ");
        }
    }
    
}
