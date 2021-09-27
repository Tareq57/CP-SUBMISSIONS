import java.util.Scanner;

public class cp {
    public static void main(String[] args)
    {
        Scanner scanner= new Scanner(System.in);
        int t= scanner.nextInt();
        for(int tc=0;tc<t;tc++)
        {
            int n=scanner.nextInt();
            String str=scanner.next();
            if(n==1)
            {
                System.out.println("-1 -1");
                continue;
            }
            int res=-1;
            for(int i=0;i<str.length()-1;i++)
            {
                if(str.charAt(i)!=str.charAt(i+1))
                {
                    res=i+1;
                    break;
                }
            }
            if(res==-1)
            {
                System.out.println("-1 -1");
            }
            else
            {
                System.out.println(res+" "+(res+1));
            }

        }


    }
}
